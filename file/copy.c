#include"custm.h"
void main(char f1[],char f2[])
{
	FILE *fp1,*fp2;
	char c;
	//printf("Input source file name\n");
	//gets(f1);
	fp1 = fopen(f1,"r");
	check(fp1);
	//printf("Input destination file name\n");
	//gets(f2);
	fp2 = fopen(f2,"w");
	check(fp2);
	while(1){
		c = fgetc(fp1);
		if(c == EOF)
			break;
		fputc(c,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
