#include"custm.h"
void main()
{
	FILE *fp;
	char c,f[20],str[100];
	printf("Input file name\n");
	gets(f);
	fp = fopen(f,"w");
	check(fp);
	printf("Input string\n");
	gets(str);
	fprintf("%s",str);
	fclose(fp);
}
