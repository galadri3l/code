#include<stdio.h>
void main()
{
	int i,j,k,l,m,j1,k1,k2;
	
	for(m=1;m<6;m++){

	for(i=1;i<6;i++)
	{	

		for(k1=5;k1>m;k1--)
			for(j1=6;j1>1;j1--)
			printf(" ");
		
		/*------------*/for(l=1;l<=m;l++)
		{	
			for(k=5;k>i;k--)
			 printf(" ");
		
			for(j=1;j<=i;j++)
			printf("* ");
		
		
			for(k=5;k>i;k--)
			printf(" ");
		}
		printf("\n");/*----------------*/

		
	}
	printf("\n");
	}
}
			
