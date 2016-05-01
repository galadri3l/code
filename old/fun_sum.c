#include<stdio.h>
int sum(int*);
void main()
{
	int a[10],i;
	printf("Input array\n");
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	printf("sum of elements = %d\n",sum(a));
}
int sum(int *x)
{
	int i,s=0;
	for(i=0;i<10;i++)
		s=s+*(x+i);
	return s/10;
}

