#include<stdio.h>
void main()
{
	int a[3][3],(*p)[3],i,j;
	p=a;
	printf("Enter the array\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",*(p+i)+j);
	printf("Formatted array\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
		printf("%d\t",*(*(p+i)+j));
	printf("\n");
	}
}
