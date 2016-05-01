#include<stdio.h>
int gcd(int a, int b)
{
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("GCD = %d\n",gcd(x,y));
}
