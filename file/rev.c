#include"custm.h"
void main()
{
	FILE *fp;
	char c,f[20];
	printf("Input file name\n");
	gets(f);
	fp = fopen(f,"a+");
	check(fp);
	fputs("hello how are you\n",fp);
	rewind(fp);
	while(1)
	{
		c = fgetc(fp);
		if(c == EOF)
			break;
		printf("%c",c);
	}
	fclose(fp);
}
