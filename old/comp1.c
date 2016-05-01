#include<stdio.h>
void main()
{
	char a[100],b[100],*pa,*pb;
	int l1=0,l2=0,f=1;
	pa =a;pb=b;
	printf("Input array\n");
	gets(a);gets(b);
	while(*pa){
		l1++;pa++;}
	while(*pb){
		l2++;pb++;}
	if(l1!=l2)
		printf("Strings are not equal\n");
	else
	{	pa = a;pb =b;
		while(*pa)
		{
			if(*pa!=*pb){
				f=0;
				break;
			}
			pa++;pb++;
		}
		if(f==0)
		printf("strigs are not equal\n");
		else
		printf("strings are equal\n");
	}
}
