#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t p;
	int i = 0;
	p = fork();
	if (p < 0)
	{
		printf("error\n");
		return 1;
	}

	else if(p == 0)
	{
		i = 5;
		while(1)
			i++;
	}

	else 
	{
		printf("%d",i);
		printf("%d",i);
		printf("%d\n",i);
	}
}
