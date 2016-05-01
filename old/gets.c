#include<stdio.h>
#include<string.h>
void main()
{
	char str[10][30];
	int i;
	printf("Enter 10 name\n");
	for(i=0;i<10;i++)
		gets(str[i]);
	for(i=0;i<10;i++)
		puts(str[i]);
}
