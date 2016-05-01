#include<stdio.h>
#include "queue.c"
void bubble_sort(proc *pr, int n)
{
	int i,j;
	proc temp;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(pr[j].st > pr[j+1].st)
			{
				temp = pr[j];
				pr[j] = pr[j+1];
				pr[j+1] = temp;
			}
		}
	}
}

void ready_queue(proc *pr,int n,int time)
{
	int i,f;
	for(i=0;i<n;i++){
		if(pr[i].at == time)
			break;
	}
	if(i==n)
		return;
	enqueue(pr[i]);
	queue[rear].ready = 1;
}

int next_in_queue()
{
	int i=mrt+1;
	if(i > rear)
		i = 0;
	while(i!=mrt)
	{
		if(queue[i].rt != 0)
			break;
		i++;
		if(i > rear)
			i=0;
	}
	return i;
}

int min_rem_time()
{
	int i,min;

	for(i=front;i<=rear;i++)
		if(queue[i].rt!=0)
			min = i;

	for(i=front;i<=rear;i++)
		if((queue[i].rt < queue[min].rt) && queue[i].rt!= 0)
			min = i;
	return min;
}

void choose_proc_to_run(int time)
{	
	int i;
	//mrt = min_rem_time();
	if(time % q ==0 || queue[mrt].rt==0)
	mrt = next_in_queue();
	queue[mrt].waiting=0;
	if(queue[mrt].st == -1)
		queue[mrt].st=time;		//set start time of each process
	for(i=front;i<=rear;i++)
	{
		if(i!=mrt && queue[i].end != 1)
			queue[i].waiting = 1;
	}
}

void dec_rem_time()
{
	(queue[mrt].rt)--;
}

void inc_wait_time()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		if(i!=mrt && queue[i].end != 1)
			(queue[i].wt)++;
	}
}

void finish_process(proc *pr,int time)
{
	int i;
	for(i=front;i<=rear;i++)
	{
		if(queue[i].rt==0 && queue[i].end ==0)
			break;
	}
	if(i>rear)
		return;
	queue[i].end = 1;
	if(queue[i].et == -1)
		queue[i].et = time;
	pr[queue[i].pid].end = 1;
	
}

process_remaining(proc *pr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(pr[i].end == 0)
			break;
	}
	if(i==n)
		return 0;
	return 1;
}

void main()
{
	proc p[50];
	int n,i,clock = 0;
	printf("Input no of processes\n"); 
	scanf("%d",&n);
	printf("Input arival and burst times of processes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p[i].at,&p[i].bt);	//get arrival and burst time of each process
		p[i].rt=p[i].bt;			//remaining time of each process set to its burst time initially
		p[i].pid = i;				//automatically generated process id as in linux
		p[i].ready = 0;
		p[i].end = 0;
		p[i].wt = 0;
		p[i].st = p[i].et = -1;
	}

	
	do{
		ready_queue(p,n,clock);
		choose_proc_to_run(clock);
		
		clock++;

		dec_rem_time();
		inc_wait_time();

		finish_process(p,clock);
	} while (process_remaining(p,n));
	
	display();

	printf("Sorted Display\n");

	bubble_sort(queue,n);

	display();

	
}		
