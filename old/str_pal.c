#include<stdio.h>
void main()
{
	char str[100];
	int i=0,f=0,l;
	
	printf("\nEnter the string: \n");
	gets(str);

	while(str[i] != '\0'){
		i++;
	}
	l = i;
	printf("The length of string = %d\n\n",l);
	for(i=0;i<(l/2);i++){
		if(str[i]!=str[(l-1)-i]){
		f = 1;
		break;}	
	}
	if(f == 1)
	printf("String is not palindrome\n");
	else
	printf("String is palindrome\n\n");
}
