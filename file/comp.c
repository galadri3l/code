#include"custm.h"
void main(){
	FILE *fp1,*fp2;
	char c1,c2,f1[20],f2[20];
	printf("Input file1 name\n");
	gets(f1);gets(f2);
	fp1 = fopen(f1,"r");
	fp2 = fopen(f2,"r");
	CHECK(fp1);check(fp2);
	while(1){
	c1 = fgetc(fp1);
	c2 = fgetc(fp2);
		if(c1 == EOF || c2 == EOF)
		break;
		if(c1!=c2)
		break;
	}
	if(c1 == EOF && c2 == EOF)
		printf("Files are identical\n");
	else
		printf("Files are different\n");
	fclose(fp1);fclose(fp2);

}
