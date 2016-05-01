#define MAX 50
struct process{
	int pid,bt,at,wt,ready,waiting,rt,end,st,et;
};

typedef struct process proc;

proc queue[MAX];
int rear=-1,front=-1,mrt=0,q=2;

void enqueue(proc);
void dequeue();
void display();

void enqueue(proc val)
{
	if(rear == MAX -1)
		printf("eOverflow\n");
	else if (rear == -1 && front == -1)
	{
		front = rear = 0;
		queue[rear]=val;
	}
	else
	{
		rear++;
		queue[rear]=val;
	}
}

void dequeue()
{	
	if(front == -1)
		printf("Underflow\n");
	else 
		front++;
	if(front > rear)
		front = rear = -1;
}


void display()
{
	int i;
	if(front == -1)
		printf("Underflow\n");
	else
	{
		printf("pid\tarrival_time\tburst_time\twaiting_time\tturn_ar_time\tstart_time\tterminate_time\n");
		printf("---\t------------\t----------\t------------\t------------\t----------\t--------------\n");
		for(i=front;i<=rear;i++)
			printf("%2d\t\t%2d\t\t%2d\t\t%2d\t\t%2d\t\t%2d\t\t%2d\n",queue[i].pid,queue[i].at, \
					queue[i].bt,queue[i].wt,queue[i].bt+queue[i].wt,queue[i].st,queue[i].et);

	}
}
