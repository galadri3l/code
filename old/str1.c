#include<stdio.h>
struct st{
	int rol;
	char nam[10];
};

struct st a(struct st n){
	n.rol = 5;
	n.nam="abcd";
}

void main()
{
	struct st c,d;
	c.rol = 3;
	c.nam[10]="cd";
}
