#include<stdio.h>
struct info{
	int rn;
	char name[20];
	float marks;
};
void pr(struct info *ps)
{
	printf("%d\n",ps->rn);
	printf("%s\n",ps->name);
	printf("%f\n",ps->marks);
}

void main()
{
	struct info a;
	scanf("%d",&a.rn);
	scanf("%s",a.name);
	scanf("%f",&a.marks);
	pr(&a);
}
