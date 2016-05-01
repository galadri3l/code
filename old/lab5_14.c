#include<stdio.h>
void main()
{
  float a,b,c;
  printf("Enter The Value Of a and b:\n");
  printf("a = ");
  scanf("%f",&a);
  printf("b = ");
  scanf("%f",&b);
  c=a;
  a=b;
  b=c;
  printf("The Values after swaping are:\n");
  printf("a = %f\n",a);
  printf("b = %f\n",b);
}
