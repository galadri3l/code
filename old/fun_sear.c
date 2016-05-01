#include<stdio.h>
int search(int*,int,int);
void main()
{
	int a[100],n,i,m;
	printf("Input size\n");
	scanf("%d",&n);
	printf("Input array\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	printf("Enter no. to find\n");
	scanf("%d",&m);
	if(search(a,n,m)==-1)
		printf("Element not found\n");
	else
		printf("element found at index: %d\n",search(a,n,m));
}
int search(int *x,int y, int z)
{
	int i;
	for(i=0;i<y;i++)
		if(*(x+i)==z)
			break;
	if(i==y)
		return -1;
	else 
		return i;
}
