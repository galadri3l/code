#include<stdio.h>
void main()
{
	char str[100];
	int i=0;

	printf("Enter the string: \n");
	gets(str);
	
	while(str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <=122)
			str[i] = str[i] - 32;
		i++;
	}
	printf("New string is: \n");
	puts(str);
}
