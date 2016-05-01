include<stdio.h>
void max(int *x,int n)
{
	int max,pmax=0,min,pmin=0,i;
	max = *x;min = *x;
	for(i=0;i<n;i++){
		if(*(x+i)>max){
			max = *(x+i);
			pmax = i;}
		if(*(x+i)<min){
			min = *(x+i);
			pmin = i;}
	}
	printf("Max = %d, PosMax = %d\n",*(x+pmax),pmax);
	printf("Min = %d, PoxMin = %d\n",*(x+pmin),pmin);
}

void main()
{
	int a[100],i,n;
	printf("Input size\n");
	scanf("%d",&n);
	printf("Input array\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	max(a,n);
}
