#include<stdio.h>

void main()
{
	float a,b,c,max;
	printf("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);

	max = c > (a>b?a:b) ? c:(a>b?a:b);
	printf(The greatest of three numbers is : %.2f",max);
}

