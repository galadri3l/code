#include<stdio.h>
void main()
{
	int a=2,b=2,c=3;
	c = (++a)+(++a);
	printf("%d %d %d %d\n",++a,++a,++a,c);
}
