#include<stdio.h>
struct info{
	int rn;
	char na[20];
};
struct info ret(struct info a){
	a.rn+= 5;
	scanf("%s",a.na);
	return a;
}

void main() {
	struct info b,c;
	scanf("%d",&b.rn);
	scanf("%s",b.na);
	c = ret(b);
	printf("%d%s",c.rn,c.na);
}
