#include"custm.h"
void main()
{
	FILE *fp;
	char c,f[20];
	int i=0,r=0;
	printf("input file name\n");
	gets(f);
	fp = fopen(f,"r");
	CHECK(fp);
	while(1){
		c = fgetc(fp);
		eof(c);
		if(c == 10)
			r++;
			i++;
	}
	printf("No of characters : %d\n",i);
	printf("No of lines      : %d\n",r);
	fclose(fp);
}
