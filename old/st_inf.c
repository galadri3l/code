#include<stdio.h>
struct stud{
	union info{
		int rn;
		char name[20];
	}inf;
	int marks;
};
void main()
{
	int n;struct stud a;
	printf("input choice\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("roll no\n");
		scanf("%d",&a.inf.rn);
		scanf("%d",&a.marks);
		printf("roll no = %d, marks = %d\n",a.inf.rn,a.marks);
	}
	else
	{
		scanf("%s",a.inf.name);
		scanf("%d",&a.marks);
		printf("name = %s , marks = %d\n",a.inf.name,a.marks);
	}
}
