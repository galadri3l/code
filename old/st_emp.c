#include<stdio.h>
struct emp{
	int emp_id,age,salary;
	char desg[20];
	struct name{
		char fn[20];
		char mn[20];
		char ln[20];
	}nm;
	struct addr{
		char area[20];
		char city[20];
		char state[20];
	}ad;
};

void main()
{
	struct emp e[5];int i;
	for(i=0;i<4;i++)
	{
		printf("Input details\n");
		printf("Emp_id\n");
		scanf("%d",&e[i].emp_id);
		printf("Name\n");
		//printf("First name\n");getchar();
		scanf(" %s",e[i].nm.fn);
		//printf("Second name\n");
		//gets(e[i].nm.mn);
		//printf("Last name\n");
		//gets(e[i].nm.ln);
		printf("Address\n");
		//printf("Area\n");
		scanf(" %s",e[i].ad.area);
		//printf("city\n");
		//gets(e[i].ad.city);
		//printf("state\n");
		//gets(e[i].ad.state);
		printf("age\n");
		scanf("%d",&e[i].age);
		printf("salary\n");
		scanf("%d",&e[i].salary);
		printf("designation");
		scanf(" %s",e[i].desg);
		getchar();
	}
	for(i=0;i<4;i++)
		if(e[i].age<30)
			printf("%s\n",e[i].nmfn);
}

