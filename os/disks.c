#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define FIFO 0
#define SSTF 1
#define SCAN 2
#define LOOK 3
#define C_SCAN 4
#define C_LOOK 5
#define MAX_SEC 200

int mode = SCAN,sector[MAX_SEC],head = 0,head_bak = 0,findex=-1,mark[MAX_SEC],turn = 0;

int get_min()
{
	int i;
	for(i=0;i<MAX_SEC;i++)
		if(sector[i] == 1)
			break;
	return i;
}

int get_max()
{
	int i;
	for(i=MAX_SEC -1;i>=0;i--)
		if(sector[i] == 1)
			break;
	return i;
}

void set_sector(int *in ,int n)
{
	int i,j,temp;
	for(i=0;i<MAX_SEC;i++)
		sector[i] = 0;

	for(i=0;i<n;i++)
		sector[in[i]] = 1;
	sector[head] = 1;
	if(mode!=FIFO || mode != SSTF)
		mark[head] = 1;
}

void sstf(int *in,int size)
{	
	int ind,min,i;
	for(i=0;i<size;i++)
		if(mark[i] == 0){
			ind = i;
			break;
		}

	min = abs(head-in[i]);
	for(i=0;i<size;i++)
		if(abs(head-in[i]) < min){
			if(mark[i]==1)
				continue;
			min = abs(head - in[i]);
			ind = i;
		}
	head = in[ind];
	mark[ind] = 1;
}

void scan_look()
{
	int i,min,max;
	max = get_max();
	min = get_min();
	if(head == 0){
		turn = 1;
		head = min;
	}
	if(turn == 0)
	for(i=head;i>=0;i--){
		if(mark[i] == 1)
			continue;
		if(sector[i] == 1){
			mark[i] = 1;
			head = i;
			break;
		}
	}
	else
		for(i=head;i<=max;i++){
			if(mark[i] == 1)
				continue;
			if(sector[i] == 1){
				mark[i] = 1;
				head = i;
				break;
			}
		}
	if(head == min)
		turn = 1;
}

void c_scan_c_look()
{
	int i,min,max;
	max = get_max();
	min = get_min();
	if(head == MAX_SEC -1){
		turn = 1;
		head = max;
	}
	if(turn == 0)
	for(i=head;i<MAX_SEC;i++){
		if(mark[i] == 1)
			continue;
		if(sector[i] == 1){
			mark[i] = 1;
			head = i;
			break;
		}
	}
	else
		for(i=0;i<head_bak;i++){
			if(mark[i] == 1)
				continue;
			if(sector[i] == 1){
				mark[i] = 1;
				head = i;
				break;
			}
		}
	if(head == max)
		turn = 1;
}
void get_next(int *in,int size)
{
	int min ,max,temp;
	min = get_min();max = get_max();

	switch(mode)
	{
		case 0: if(findex == -1)
				findex+=1;
			else{
				head=in[findex];
				findex++;
			}
			break;	
		case 1: if(findex == -1);
			else
				sstf(in,size);
			findex++;
			break;
		case 2: if(findex == -1);
			else
				scan_look();
			findex++;
			break;
		case 3: if(findex == -1);
			else
				scan_look();
			findex++;
			break;
		case 4: if(findex == -1);
			else
				c_scan_c_look();
			findex++;
			break;
		case 5: if(findex == -1);
			else
				c_scan_c_look();
			findex++;
	}
}
void print_disk()
{
	switch(mode){
		case SCAN: if(head == get_min() && turn==1)   printf("h_0\t");
			   break;
		case C_SCAN: if(head == get_max() && turn ==1) 
				     printf("h_%d\th_0\t",MAX_SEC-1);
			     break;
	}
}

void main()
{
	int queue[200],n;
	int i=0;
	printf("Input size\n");
	scanf("%d",&n);
	printf("Input read queue\n");
	for(i=0;i<n;i++)
		scanf("%d",&queue[i]);
	printf("Input head position\n");
	scanf("%d",&head);
	head_bak = head;
	set_sector(queue,n);
	i = 0;
	printf("current head position\n");
	printf("|\nv\n");
	while(i<=n){
		get_next(queue,n);
		printf("%d\t",head);
		print_disk();
		i++;
	}
	printf("\n");
}
