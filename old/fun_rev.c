#include<stdio.h>
void revs(int*,int);
void main()
{
	int a[100],n,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	revs(a,n);
}
void revs(int *x,int y)
{
	int i;
	for(i=0;i<y;i++)
		printf("%d\t",*(x+y-1-i));
	printf("\n");
}
