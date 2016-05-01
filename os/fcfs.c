#include<stdio.h>

struct process {
	int pid,bt,wt,tt,at;
};

typedef struct process proc;

void bubble_sort(proc *pr, int n)
{
        int i,j;
        proc temp;
        for(i=0;i<(n-1);i++)
        {
                for(j=0;j<(n-i-1);j++)
                {
                        if(pr[j].bt > pr[j+1].bt)
                        {
                                temp = pr[j];
                                pr[j] = pr[j+1];
                                pr[j+1] = temp;
                        }
                }
        }
}
void display(proc *pr,int n)
{
                int i;
		printf("pid\torder_time\tburst_time\twaiting_time\tturn_ar_time\n");
                printf("---\t----------\t----------\t------------\t------------\n");
                for(i=0;i<n;i++)
                        printf("%2d\t\t%2d\t\t%2d\t\t%2d\t\t%2d\n",pr[i].pid,pr[i].at, \
                                        pr[i].bt,pr[i].wt,pr[i].tt);

}

void main()
{
	proc p[100];
	int n,i,j;
	float avg;
	printf("Input no of processes\n");
	scanf("%d",&n);

	printf("Input burst and arival time of processes\n");

	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p[i].bt,&p[i].at);
		p[i].wt = 0;
		p[i].pid = 100 + i;
	}

	bubble_sort(p,n);

	p[0].wt = 0; p[0].tt = p[0].bt;
	avg = p[0].wt;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			p[i].wt = p[i].wt + p[j].bt;
		p[i].tt = p[i].wt + p[i].bt;
		avg = avg + p[i].wt;
	}

	display(p,n);
	printf("\n");
	printf("AVERAGE WAITING TIME: %f\n",avg/n);

}

