#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include "spinor.h"
#define DIGIT 10000000

short int *a;
short int trigger=0;
spinor_t sp_init;

short int * factorial(int n)
{
	int i,r,j,temp;
	if(n < 1)
		exit(1);

	a = (short int *) malloc(sizeof(short int)*(DIGIT +1));

	if(a == NULL){
		printf("heap not allocated\n");
		exit(1);
	}

	for(i=0;i<DIGIT +1;i++)
		a[i] = -1;

	temp = n;

	for(i=DIGIT;temp>0;i--){
		a[i] = temp % 10;
		temp = temp/10;
	}

	r = 0;
	for(i = n-1;i>0;i--){
		for(j=DIGIT;a[j]>=0;j--){
			r = (i * a[j]) + r;
			a[j] = r % 10;
			r = r/10;
		}

		while(r > 0){
			a[j] = r %10;
			r = r/10;
			j--;
		}
		r = 0;
	}
	return a;
}


int main(int argc,char **argv)
{
	if(argc != 2){
		printf("Usage: %s <positive_intiger>\n:((\n",argv[0]);
		exit(1);
	}

	int n = atoi(argv[1]),i;
	pthread_t  id;
	void *exits;
	short *ans;
	
	fprintf(stderr,"Calculating, keep patience or go to lisp :)) ");  
	
	init_spinor(&sp_init,150,&trigger,stderr,rebound);	
	pthread_create(&id,NULL,spinor,&sp_init);
	
	ans = factorial(n);

	trigger = 1;
	pthread_join(id,&exits);

	for(i=0;ans[i]<1;i++);
	for(; i<DIGIT+1 ;i++) 
		printf("%d",ans[i]);
	printf("\n\n");
	free(ans);
	return 0;
}

