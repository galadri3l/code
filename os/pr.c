#include<stdio.h>
#define PAGE 4
int front = -1,rear = -1;
int queue[PAGE];
int fault=0;

void dequeue()
{
	front++;
	front = front%PAGE;
}
void enqueue(int data)
{
	int i=front;
	if(front!=-1)
	{
		while((i+1)!=front)
		{
			if(queue[i] == data)
				return;
			if(i==rear || i == PAGE-1){
				i = -1;
				continue;
			}
			i++;
		}
	}

	fault++;

	if(front==-1)
		front=0;

	else if((front==0 && rear == PAGE-1) || front == rear+1)
		dequeue();

	rear++;
	rear = rear % PAGE;
	queue[rear] = data;
}


void main()
{
	int n,i=1;
	printf("Input string\n");
	while(n != 777)
	{
		scanf("%d",&n);
		if(n == 777)
			break;
		enqueue(n);
	}
	printf("Page fault = %d\n",fault);
}
