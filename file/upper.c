#include"custm.h"
void main()
{
	FILE *fp;
	char c,f[20];
	printf("input file name\n");
	gets(f);
	fp = fopen(f,"r");
	CHECK(fp);
	while(1){
		c = fgetc(fp);
		if(c == EOF)
			break;
		if(c>'a'&& c<'z')
			printf("%c",c-32);
		else
		printf("%c",c);
	}
	fclose(fp);
}
