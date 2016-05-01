#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	char *pa,*pb;
	pa = a;pb = b;
	printf("Input string\n");
	gets(a);
	while(*pa)
	{
		*pb=*pa;
		++pb;++pa;
	}
	puts(b);
	printf("%d\n",strlen(b));
}
