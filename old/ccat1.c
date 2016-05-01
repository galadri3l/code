#include<stdio.h>
void main()
{
	char a[100],b[100],*pa,*pb;
	pa =a; pb = b;
	printf("Input two strings\n");
	gets(a);
	gets(b);
	while(*pa)
		pa++;
	while(*pb){
		*pa=*pb;
		pa++;pb++;
	}
	*pa='\0';
	puts(a);
}
