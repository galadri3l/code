#include "custm.h"
#include "string.h"
void main()
{
	FILE *fp;
	char str[100],f1[20];
	printf("input file name\n");
	gets(f1);
	fp = fopen(f1,"w");
	check(fp);
	printf("input data\n");
	while(1)
	{
	gets(str);
	if(!strcmp(str,"/q"))
		break;
	fputs(str,fp);
	fputc('\n',fp);
	}

	fcloseall();
}
