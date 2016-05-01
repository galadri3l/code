#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int val){

	if(rear == MAX -1)
	       printf("Overflow\n");
	else if(front = -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = val;
	}

	else
	{
		rear++;
		queue[rear] = val;
	}
}

void dequeue(){
	int d;
	if(front == -1)
	       printf("Underflow\n");
	else{
		d = queue[front];
		printf("deleted element = %d\n",d);
		front++;
	}

	if(front > rear)
		front = rear = -1;
}

void display(){
	int i;
	if(front == -1)
		printf("Underflow\n");
	else{
		for(i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
		printf("\n");
	}
}

void main()
{
	int choice,val;
	printf("Input choice\n");
	while(1)
	{
		printf("1: enqueue 2: dequeue 3: display 4: exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("Input value\n");
				scanf("%d",&val);
				enqueue(val);
				break;
			
			case 2: dequeue();
				break;

			case 3: display();
				break;

			case 4: exit(0);
				break;

			default: printf("Invalid choice\n");
		}
	}
}
