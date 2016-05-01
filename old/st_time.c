#include<stdio.h>
struct time {
	int h,m,s;
};
void main()
{
	struct time t1,t2,t3;
	int a,b;
	printf("input time 1\n");
	scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
	printf("input time 2\n");
	scanf("%d%d%d",&t2.h,&t2.m,&t2.s);
	t3.s= (t1.s+t2.s)%60;
	a = (t1.s+t2.s)/60;
	t3.m= (a+t1.m+t2.m)%60;
	b = (a+t1.m+t2.m)/60;
	t3.h= b + t1.h + t2.h;
	printf("t1 + t2 = %d : %d : %d\n",t3.h,t3.m,t3.s);
}

