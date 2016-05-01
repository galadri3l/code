#include<stdio.h>
void main()
{

	int A[10][10],B[10][10],i,j,row,col;
	printf("Enter the row and column of matrix\n");
	scanf("%d%d",&row,&col);
	printf("Enter the matrix\n");

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		scanf("%d",&A[i][j]);

	for(i=0;i<col;i++)
		for(j=0;j<row;j++)
			B[i][j]=A[j][i];

	printf("\n\n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++)
			printf("%d\t",B[i][j]);
		printf("\n");
	}
}

