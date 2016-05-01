#include<stdio.h>
#define __qd_type proc
#include "queue.c"

QUEUE que;

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
	enqueuer(&que,pr[i]);
	(que.item[que.rear]).ready = 1;
}

int min_rem_time()
{
	int i,min;

	for(i=que.front;i<=que.rear;i++)
		if((que.item[i]).rt!=0)
			min = i;

	for(i=que.front;i<=que.rear;i++)
		if((que.item[i].rt < que.item[min].rt) && que.item[i].rt!= 0)
			min = i;
	return min;
}

void choose_proc_to_run(int time)
{	
	int i;
	mrt = min_rem_time();
	que.item[mrt].waiting=0;
	if(que.item[mrt].st == -1)
		que.item[mrt].st=time;		//set start time of each process
	for(i=que.front;i<=que.rear;i++)
	{
		if(i!=mrt && que.item[i].end != 1)
			que.item[i].waiting = 1;
	}
}

void dec_rem_time()
{
	(que.item[mrt].rt)--;
}

void inc_wait_time()
{
	int i;
	for(i=que.front;i<=que.rear;i++)
	{
		if(i!=mrt && que.item[i].end != 1)
			(que.item[i].wt)++;
	}
}

void finish_process(proc *pr,int time)
{
	int i;
	for(i=que.front;i<=que.rear;i++)
	{
		if(que.item[i].rt==0 && que.item[i].end ==0)
			break;
	}
	if(i>que.rear)
		return;
	que.item[i].end = 1;
	if(que.item[i].et == -1)
		que.item[i].et = time;
	pr[que.item[i].pid].end = 1;
	
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
	init_queue(&que);
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
