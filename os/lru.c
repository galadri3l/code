#include<stdio.h>
#define PAGE_SIZE 4
#define FIFO 0
#define LRU 1
#define LFU 2
#define MODE LRU

struct PAGE {
	int data;
	int t_stamp;
	int count;
};
typedef struct PAGE page;

int front = -1,rear = -1,stamp = 0,fake_rear=-1;
page queue[PAGE_SIZE];
int fault=0;

void init_queue()
{
	int i;
	for(i=0;i<PAGE_SIZE;i++)
		queue[i].data = queue[i].t_stamp = queue[i].count = 0;
}

int least_recent_used()
{
	int i,min=0;
	for(i=0;i<PAGE_SIZE;i++)
		if(queue[i].t_stamp < queue[min].t_stamp)
			min = i;
	return min;
}

int least_freq_used()
{
	int i,min=0;
	for(i=0;i<PAGE_SIZE;i++){
		if(queue[i].count < queue[min].count) 
		       	min = i;
		else if(queue[i].count == queue[min].count && queue[i].t_stamp < queue[min].t_stamp)
			min = i;
	}
	return min;
}

void set_count_stamp(int index)
{
	queue[index].count+=1;
	queue[index].t_stamp=stamp;
}

void replace()
{
	int m;
	m = MODE;
	switch(m)
	{
		case 0: front = (++front) % PAGE_SIZE;
			rear = (++rear) % PAGE_SIZE;
			fake_rear = rear;
			break;
		case 1: fake_rear = least_recent_used();
			break;
		case 2: fake_rear = least_freq_used();
			break;
	}
}
int test_to_enqueue(page d)
{
	stamp++;
	int i=front;
	if(front!=-1)
		do
		{
			if(queue[i].data == d.data){
				set_count_stamp(i);
				return 1;
			}
			if(i==rear)
				i = front-1;
			else if(i == PAGE_SIZE-1)
				i=-1;
		}while( (++i) !=front );
	return 0;
}

void enqueue(page data)
{
	if(test_to_enqueue(data))
	return;
	
	fault++;

	if(front==-1){
		front=rear=0;
		queue[rear] = data;
		set_count_stamp(rear);
	}

	else if((front==0 && rear == PAGE_SIZE-1) || front == rear+1){
		replace();
		queue[fake_rear] = data;
		set_count_stamp(fake_rear);
	}

	else{
		rear++;
		queue[rear] = data;
		set_count_stamp(rear);
	}
	
}
void input()
{
	page n;
	while(n.data != 777)
	{
		scanf("%d",&(n.data));
		n.t_stamp=n.count=0;
		if(n.data == 777)
			break;
		enqueue(n);
	}
}

void main()
{
	int i=1;
	init_queue();
	printf("Input string\n");
	input();
	printf("Page fault = %d\n",fault);
}
