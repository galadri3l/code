#include<stdio.h>
void main()
{
	int a=10,b=5;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	printf("%d\n%d\n%d\n",a,*pa,pa*pb);
}
