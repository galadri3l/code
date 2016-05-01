#include<stdio.h>
union ch{
	int ar[100],x,y,z;
};
void main()
{
	union ch a;
	float n = 6.23;
	a.ar[0]=1;
	a.ar[1]=2;
	a.ar[2]=3;
	a.x=4;
	a.y=5;
	a.z=6;
	printf("%d%d%d%d%d",a.ar[0],a.ar[1],a.ar[2],a.x);
}
