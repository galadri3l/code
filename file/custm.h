#include<stdio.h>
#include<stdlib.h>
#define CHECK(x) if(x == NULL){\
		       printf("Unable to open file\n");\
		       exit(1);}
#define eof(x) if(x == EOF) break
void check(FILE *fp){
	if(fp == NULL){
		printf("Unable to open file\n");
		exit(1);
	}
}

