#include<stdio.h>
#include<stdlib.h>
#define DIGIT 10000000
short int *a;
void main()
{
  	a = (short int *) malloc(sizeof(short int)*(DIGIT +1));

	if(a == NULL){
		printf("heap not allocated\n");
		exit(1);
	}

	//short int a[DIGIT +1];
	int n,i,temp,r,j;

	for(i=0;i<DIGIT +1;i++)
		a[i] = -1;
	printf("Input no: ");
	scanf("%d",&n);
	if(n < 1)
		exit(1);
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

	for(i=0;a[i]<1;i++);
	for(; i<DIGIT+1 ;i++) 
		printf("%d",a[i]);
	printf("\n\n");
}

	
 
