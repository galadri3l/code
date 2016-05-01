#include<stdio.h>
struct info{
	int rn;
	char name[20];
	float marks;
};
void pr(struct info a)
{
	printf("%d\n",a.rn);
	printf("%s\n",a.name);
	printf("%f\n",a.marks);
}
void main()
{	struct info b;
	scanf("%d",&b.rn);
	scanf("%s",b.name);
	scanf("%f",&b.marks);
	pr(b);
}

