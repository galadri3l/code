#include<stdio.h>
void main()
{
	char a[100],*p;
	int i=0;
	p = a;
	printf("Input the string\n");
	gets(a);
	while(*p)
	{	if(*p == ' ')
		i++;
		p++;
	}
	printf("No of words = %d\n",i+1);
}
	
