#include<stdio.h>
int fact(int x);
void main()
{	
	int n,r;
	float bicof;
	printf("Enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	bicof = fact(n)/(fact(n-r)*fact(r));
	printf("nCr = %.0f\n%d\n",bicof,fact(n));
}
int fact(int x)
{
	int i,p=1;
	for(i=1;i<=x;i++)
		p = p*i;
	return p;
}
