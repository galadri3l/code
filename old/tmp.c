#include<stdio.h>
int x=2;
void swap()
{
	 x=x+1;
}
void main()
{
	x = x+2;
	swap();
	printf("%d\n",x);

}
