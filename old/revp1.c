#include<stdio.h>
void main()
{
	char a[20];
	char *p;
	p = a;
	printf("Input string\n");
	gets(a);
	while(*p)
		p++;
	p--;
	while(p>=a){
		printf("%c",**p);
		p--;
	}
}
