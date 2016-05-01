#include<stdio.h>
void main()
{
	int i,n,u,s=0,t=1,stmp;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("%d\n",t);
	for(;i<=n;i++)
	{
		u=s+t;
		stmp=s;
		s=t;
		t=t+stmp;
		printf("%d\n",u);

}
}
