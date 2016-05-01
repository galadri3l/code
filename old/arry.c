#include<stdio.h>
int sum(int *a,int n)
{
	if(n==0)
		return a[0];
	else
		return a[n]+sum(a,n-1);
}

void main()
{
	int a[5],c,i;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	c = sum(a,4);
	printf("%d\n",c);
}	
