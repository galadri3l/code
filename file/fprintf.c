#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char str1[100],str2[100],str3[100],f[20];
	printf("Input file name\n");
	gets(f);
	fp = fopen(f,"w");
	if(fp == NULL){
		printf("Unable to open file\n");
		exit(1);
	}
	printf("Input your name,fathers name and mothers name\n");
	gets(str1);
	gets(str2);
	gets(str3);
	fprintf(fp,"%s\n%s\n%s",str1,str2,str3);
	printf("no of file closed = %d\n",fcloseall());
}
	
