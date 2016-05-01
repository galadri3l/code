#include<stdio.h>
void main()
{
	int i,n,f=0,p,k=0;
	printf("Enter no. of terms to be printed");
	scanf("%d",&n);
	printf("%d , %d ,",f,(f+1));
	f++;
	for(i=1;i<=n;i++)
	{
		p=f;
		f=f+k;
		k=p;
		printf("%d ,",f);
	}
}
