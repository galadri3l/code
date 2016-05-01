#include<stdio.h>
void main()
{
	int a[10],*pa,i,f;
	pa =a;
	printf("Input Intigers\n");
	for(;pa<(a+10);pa++)
		scanf("%d",pa);
	pa =a;
	for(;pa<(a+10);pa++){
		f=1;
		for(i=2;i<*pa;i++){
			if(*pa%i==0){
			f=0;
			break;}
		}
		if(f==0)
		printf("%d is not prime\n",*pa);
		else
		printf("%d is prime\n",*pa);
	}
		
}		
