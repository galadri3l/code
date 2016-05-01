#include<stdio.h>

void main()
{
	float a,b,c,max1,max2;
	printf("Enter three numbers\n");
	printf("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);
	max2 = c > (max1 = (a > b ? a : b)) ? c : (max1 = (a > b ? a : b));  /*largest of three numbers*/
	printf("The largest of three numbers is : %f\n",max2); 	
}
