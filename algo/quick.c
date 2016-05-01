#include<stdio.h>

quicksort(int *a,int p,int r)
{
	int q;
	if(p < r){
		q = partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}
void exchange(int *x,int *y)
{
	int tmp;
	tmp = *x;
	*y = *x;
	*x = tmp;
}

int partition(int *a,int p,int r)
{
	int x,i,j;
	x = a[r];
	i = p-1;
	for(j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			exchange(&a[i],&a[j]);
		}
	}
	exchange(&a[r],&a[i+1]);
	return i+1;
}

void main()
{
	int a[100],n,i;
	printf("Input size\n");
	scanf("%d",&n);
	printf("input array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
