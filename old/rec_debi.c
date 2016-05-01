#include<stdio.h>
//int debi(int);
void main()
{
	int n;
	printf("Enter the decimal no.\n");
	scanf("%d",&n);
	printf("binary = %d\n",debi(n));
}
int debi(int n)
{
	if(n/2==0)
	return n%2;
	else
	return n%2+10*debi(n/2);
}
