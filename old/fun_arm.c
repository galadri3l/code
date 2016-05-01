#include<stdio.h>
#include<math.h>
int arm(int);
void main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(arm(i)==0)
			printf("%d\n",i);
}
int arm(int x)
{
	int m,t,s=0;
	t =x;
	while(x>0){
		m = x%10;x=x/10;
		s=s+pow(m,3);
	}
		if(s==t)
			return 0;
		return 1;
}
	
