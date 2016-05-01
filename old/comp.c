#include<stdio.h>
void main()
{
	char a[100],b[100],*pa,*pb;
	int c;
	pa =a; pb =b;
	pa--;pb--;*pa=*pb=1;
	gets(a);gets(b);
	while(*pa&&*pb)
	{
		pa++;pb++;
		if((c=*pa-*pb)!=0)
			break;
	}
	if(c==0)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}	
