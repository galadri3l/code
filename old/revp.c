#include<stdio.h>
void main()
{
	char str1[100],str2[100],*pstr;
	pstr =&str1[0];
	int i=0,l;
	printf("Input the string\n");
	gets(str1);
	while(str1[i]!='\0')
		i++;

	l=i;

	for(i=0;i<l;i++)
	{	str2[i]=*(pstr+(l-i-1));
	}
	printf("%d\n",str2[l+5]);
	puts(str2);
}


	
