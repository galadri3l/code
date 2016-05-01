#include<stdio.h>

void main()
{
	int a;
	scanf("%d",&a);
	printf("reverse = %d\n",rev(a));
}
int  rev(int )
{
	int m,s=0;
	while(x!=0){
		m = x%10;
		x = x/10;
		s = s*10+m;
	}
	return s;
}

