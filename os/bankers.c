#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int allocation[MAX][MAX],max[MAX][MAX],need[MAX][MAX],avail[MAX],finish[MAX],safe[MAX];
int n,m,sindex = 0;
void main()
{
	int i,j,c,f;
	printf("input no of processes and resources\n");
	scanf("%d%d",&n,&m);
	printf("input allocation matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&allocation[i][j]);
	printf("input max matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&max[i][j]);
	printf("input avail resources\n");
	for(i=0;i<m;i++)
		scanf("%d",&avail[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			need[i][j] = max[i][j] - allocation[i][j];
	for(i=0;i<n;i++)
		finish[i] = 0;

	i = 0; c = 0;f = 1;
	while(c <= (n*n))
	{
		f = 1;
		if(finish[i] == 0)
		{
			for(j=0;j<m;j++)
				if(need[i][j] > avail[j]){
					f = 0;
					break;
				}
			if(f == 1)
			{
				for(j=0;j<m;j++)
					avail[j] = avail[j] + allocation[i][j];
				finish[i] = 1;
				//safe sequence record
				safe[sindex] = i;
				sindex++;
				//close safe sequence
			}
		}
		i = (i+1)%n;
		c++;
	}
	
	for(i=0;i<n;i++)
		if(finish[i] == 0)
		{
			printf("No safe sequence exists\n");
			exit(1);
		}
	
	printf("safe sequence :\n");
	for(i=0;i<n;i++)
		printf("%d\t",safe[i]);
	printf("\n");
}

