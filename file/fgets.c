#include "custm.h"
#include "string.h"
void main()
{
	FILE *fp;
	char c,str[100],f1[20];
	printf("input file name\n");
	gets(f1);
	fp = fopen(f1,"r");
	check(fp);
	while(fgets(str,100,fp)!=NULL){
	printf("%s",str);
	}

	fcloseall();
}
