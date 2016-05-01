#include<stdio.h>
void main()
{
	int a[10],b[10],*pa,*pb,i,f;
	pa =a;pb=b;
	printf("Input Intigers\n");
	for(;pa<(a+10);pa++,pb++){
		scanf("%d",pa);
		f=1;
		for(i=2;i<*pa;i++){
			if((*pa)%i==0){
			f=0;
			break;}
		}
		if(f==0)
		*pb=0;
		else
		*pb=1;
	}
	pb=b;pa=a;
	for(;pb<(b+10);pb++,pa++)
		if(*pb==0)
			printf("%d is not prime\n",*pa);
		else
			printf("%d is prime\n",*pa);
		
}		
