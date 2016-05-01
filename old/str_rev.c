#include<stdio.h>
void main()
{
	char str[100];
	int i=0,j;
	printf("Input the string: \n");
	gets(str);
	while(str[i] != '\0')
	{
		i++;
	}
	for(j = i-1;j >= 0;j--)
	{
		printf("%c",str[j]);
	}
	printf("\n");
}
				
		
