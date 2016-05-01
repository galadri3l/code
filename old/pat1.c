#include<stdio.h>
void main()
{
	int i,j,k,l,m,n;
	
	for(m=1;m<6;m++){
	
	for(i=1;i<6;i++)
	{	
		for(l=1;l<=m;l++)
		{	
			for(k=5;k>i;k--)
			 printf(" ");
		
			for(j=1;j<=i;j++)
			printf("* ");
		
		
			for(k=5;k>i;k--)
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	}
}
			
