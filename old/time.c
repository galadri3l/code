#include<stdio.h>
struct info{
	int rn;
	char name[20];
	float marks;
};
void main()
{
	struct info s,*ps;
	ps = &s;
	scanf("%d",&(*ps).rn);
	printf("%d",(*ps).rn);
	scanf("%s",(*ps).name);
	puts((*ps).name);
	scanf("%f",&(*ps).marks);
	printf("%f",(*ps).marks);

	scanf("%d", &ps->rn);
	scanf("%s",  ps->name);
	scanf("%f", &ps->marks);
	printf("%d\n",ps->rn);
	puts(ps->name);
	printf("%f\n",ps->marks);
}
