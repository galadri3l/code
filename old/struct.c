#include<stdio.h>
struct point{
	int x,y;
	struct cor{
		int x;
	}p;
	char n[10];
};
void main(){
	struct point a;
	a.p.x=5;
	a.x=7;
	printf("%d%d",a.p.x,a.x);

}
