#include<stdio.h>

void main()
{
	int n,i,j;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1){
				printf("%02d ",j);
				continue;
			}
			else if(i==n){
				printf("%02d ",(3*n-j-1));
				continue;
			}
			else if(j==1){
				printf("%02d ",(n-1)*4 - (i-2));
				continue;
			}
			else if(j==n){
				printf("%02d",n+i-1);
				continue;
			}
			else
			printf("   ");
		}
		printf("\n");
	}
}



