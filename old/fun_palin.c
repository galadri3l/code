#include<stdio.h>
int palindrome(int n);
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(palindrome(n)==1)
		printf("number is palindrome\n");
	if(palindrome(n)==0)
		printf("number is not palindrome\n");
}
int palindrome(int n)
{
	int r=0,m,t;
	t = n;
	while(n!=0){
		m = n%10;
		n = n/10;
		r = r*10 + m;
	}
	if(t == r)
		return 1;
	else
		return 0;
}
