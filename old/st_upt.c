#include<stdio.h>
union point{
//	struct pt{
		int x[2];
//	}p;
};
void main()
{
	union point q;
	scanf("%d%d",&q.x[0],&q.x[1]);
	printf("%d,%d\n",q.x[0],q.x[1]);
}
