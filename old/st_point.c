#include<stdio.h>
struct point{
		float x,y;
};
void main()
{
	struct point p;
	printf("Input coordinates \n");
	scanf("%f%f",&p.x,&p.y);
	if(p.x>0&&p.y>0)
		printf("point lies in first quadrant \n");
	else if(p.x<0&&p.y>0)
		printf("point lies in second quadrant \n");
	else if(p.x<0&&p.y<0)
		printf("point lies in third quadrant \n");
	else
		printf("point lies in fourth quadrant \n");
}
