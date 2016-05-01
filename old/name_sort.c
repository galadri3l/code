#include<stdio.h>
#include<string.h>
void main()
{
	char str[100][100],temp[100];
	int i,j,n;
	printf("Enter the size of list :\n");
	scanf("%d",&n);
	getchar();
	printf("Enter %d strings :\n",n);
	for(i=0;i<10;i++)
		gets(str[i]);



	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}

	printf("Sorted list\n");
	for(i=0;i<n;i++)
		puts(str[i]);
}

