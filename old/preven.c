#include<stdio.h>
void main()
{
	int m,n,*pn,*pm;
	pn=&n;pm=&m;
	printf("Enter the upper and lower limit\n");
	scanf("%d%d",pm,pn);
	if(*pm%2==0)
		for(*pm;*pm<=*pn;*pm+=2)
			printf("%d\t",*pm);
	else
		for(*pm+=1;*pm<=*pn;*pm+=2)
			printf("%d\t",*pm);
	printf("\n");
}
