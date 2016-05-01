#include<stdio.h>
void main()
{
	int a[2][2]={1,2,3,4};
	int *pa;pa=a;
	printf("%u\n%u\n%u\n%u\n%u\n",a,a[0],&a[0],&a[0][0],pa);
}
