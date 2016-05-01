#include<stdio.h>
void main()
{ 
        int i,j,k,l,size,key,tmp;
	printf("Please entre the size: \n");
	scanf("%d",&size);
	int a[size];
	/*for(i=0;i<=(size-1);i++)
	  {
	    printf("x%d = ",i+1);
	    scanf("%d", &tmp);
	    a[i] = tmp;
	  }
*/	i = 0;
	while((scanf("%d"  &(a[i])) !=0)&&(i<size)) //
	{
		printf("x%d = %d",i+1,a[i]);
		i++;		
	}
	for(j=1;j<size;j++)
	  {
	    key = a[j];
	    k = j-1;
	      while((k >= 0) && (a[k]>key))
		{
		  a[k+1] = a[k];
		  a[k] = key;
		  k=k-1;
		  //a[k+1]=key;
		}
	  }

	for (l=0;;l++)  //loop changed correct it
	printf("%d\n",a[l]);

	printf("The largest no is: %d\n",a[size-1]);
}
