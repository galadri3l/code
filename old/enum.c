#include<stdio.h>
enum color{blue,red,white,purple};
void main()
{
	enum color c;
	int co;
	//	c = (enum color) 1;
	scanf("%d",&c);
	//c = (enum color) co;
	switch(c)
	{
		case red:
			printf("%s","RED");
			break;
		case blue:
			printf("%s","BLUE");
			break;
		case white:
			printf("%s","WHITE");
			break;
		case purple:
			printf("%s","PURPLE");
			break;
		default:
			printf("invalid\n");
			break;
	}
	printf("%d\n",purple);
}
		
