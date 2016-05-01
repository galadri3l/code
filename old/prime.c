#include<stdio.h>
#include<math.h>

int prime(int w)
{
	int i,m;
	i = 2;
	while(i<=sqrt(w))
	{
		m = w%i;
		if(m == 0)
		break;
		i++;
	}
	return i;
}

void main()
{
	int p,n,o;
	printf("Enter the number: ");
	scanf("%d",&p);
	for(n=3;n<=p;n++){
	o = (int) sqrt(n);
	if( o <= prime(n));
	else
	printf("%d",n);
	}
}
