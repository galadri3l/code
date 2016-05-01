#include<stdio.h>
int bc(int n,int r)
{
	int t;
	t = r
	if(n==r)
		return 1;
	else
		return (n/((n-t)*r))*bc(n-1,r-1);
}
void main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	printf("nCr = %d\n",bc(n,r));
}

