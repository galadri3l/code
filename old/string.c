#include<stdio.h>
#include<string.h>
void main()
{
	char str1[5]="abcde",str[5];
	int i=0;
	puts(strcpy(str,str1));
	while(str1[i]!='\0'){
		printf("%c",str1[i]);i++;
	}		
}
