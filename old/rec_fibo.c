#include<stdio.h>
int fibo(int m)
{
	if(m==1)
		return 0;
	else if(m==2)
		return 1;
	else 
		return fibo(m-1)+fibo(m-2);
}
void main()
{
	int m;
	scanf("%d",&m);
	printf("mth fib = %d\n",fibo(m));
	return 0;
}
