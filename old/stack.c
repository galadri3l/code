#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int stack[MAX];
int top = -1;

void push(int val){
	if(top == MAX-1)
		printf("Overflow\n");
	else
	{
		top++;
		stack[top] = val;
	}
}

void pop(){
	int d;
	if(top == -1)
		printf("Underflow\n");
	else
	{
		d = stack[top];
		top--;
		printf("deleted element = %d\n",d);
	}
}

void peek(){
	if(top==-1)
		printf("Underflow\n");
	else
	{
		printf("%d\n",stack[top]);
	}
}

void display(){
	int i;
	if(top == -1)
		printf("Underflow\n");
	else
	{
		for(i=top;i>=0;i--)
			printf("%d\t",stack[i]);
		printf("\n");
	}
}

void main()
{
	int choice,val;
	printf("Input choice\n");
	while(1){
		printf("1: push 2: pop 3: peek 4: display 5: exit\n");
		scanf("%d",&choice);
		
		switch(choice){

			case 1:
				printf("Input value\n");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:	
				peek();
				break;
			case 4:	
				display();
				break;
			case 5:
				exit(0);
			default : 
				printf("Invalid choice\n");
		}
	}
}



