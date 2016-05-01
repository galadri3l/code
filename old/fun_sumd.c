#include<stdio.h>
int dsum(int);
void main()
{
	int a;
	scanf("%d",&a);
	printf("sum of digits = %d\n",dsum(a));
}
int dsum(int x)
{
	int m,s=0;
	while(x>0{
		m = x%10;
		x = x/10;
		s = s+m;}
	return s;
}

