#include<stdio.h>
void main()
{
	int A[10][10],i,n,j,s=0,s1=0;
	printf("Enter the order of square matrix\n");
	scanf("%d",&n);

	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
		s=s+A[i][i];
	for(i=0;i<n;i++){
	s1 = A[i][i]-A[i][n-i-1];
	printf("%d\n",s1);
}}
