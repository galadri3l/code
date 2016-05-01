#include<stdio.h>
#include<math.h>

void main()
{
  int j,i,a,m,s,t;
  printf("Enter the limit : ");
  scanf("%d",&t);

  
  for(i=1;i<t;i++)
    {
      a=i;
      s=0;
      j = 3;
      while(a>0)
	{
	  m=a%10;
	  a=a/10;
	  s = s + pow(m,j);
       	}
        if(s == i)
	printf("%d\n",s);
      	}
}
