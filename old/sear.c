#include<stdio.h>
void main()
{
	char a[100],b,*pa,*pb;
	pa = a; pb = &b;
	printf("Input the string\n");
	gets(a);
	printf("Enter the element to search\n");
	scanf("%c",pb);
	while(*pa)
	{
		if(*pa == *pb)
		       break;
		pa++;
	}
	if(*pa == '\0')
	printf("Element not found\n");
	else 
	printf("Element fount at position %ld\n",(pa-a)+1);
}
	
