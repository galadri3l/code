#include"custm.h"
void main()
{
	FILE *fp;
	char c,f[20];
	printf("input file name\n");
	gets(f);
	fp = fopen(f,"w");
	CHECK(fp);
	fputs("Hello",fp);
/*	while(1){
		c = fgetc(fp);
		if(c == EOF)
			break;
		printf("%c",c);
	}*/
	rewind(fp);
	fputs("ab",fp);
	fclose(fp);
}
