#include<stdio.h>
int max(int *x,int n)
{
	int max,i,pos;
	max = *x;
	for(i=0;i<n;i++)
		if(*(x+i)>max){
			max = *(x+i);
			pos = i;}
	return pos;
}
int min(int *x,int n)
{
	int min,i,pos;
	min = *x;
	for(i=0;i<n;i++)
		if(*(x+i)<min){
			min = *(x+i);
			pos = i;}
	return pos;
}
void main()
{
	int a[100],n,i,maximum,minimum;
	printf("Input size\n");
	scanf("%d",&n);
	printf("Input array\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	maximum = *(a+max(a,n));
	minimum = *(a+min(a,n));
	printf("Maximum = %d , Pos = %d\n",maximum,max(a,n));
	printf("Minimum = %d , Pos = %d\n",minimum,min(a,n));
}

