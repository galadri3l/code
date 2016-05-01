#include<stdio.h>
void main()
{
	int rollno[50],phy[50],math[50],per[50],i,n;
	printf("Please enter the no of students: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		rollno[i]=i+1;
	printf("Enter the marks of students in phyiscs : \n");
	for(i=0;i<n;i++)
		scanf("%d",&phy[i]);
	printf("Enter the marks of students in maths : \n");
	for(i=0;i<n;i++)
		scanf("%d",&math[i]);
	for(i=0;i<n;i++)
		per[i]=(phy[i]+math[i])/2;
	
	printf("\tRoll No.\tPhysics Marks\tMath Marks\tPercentage\n");

	for(i=0;i<n;i++)
		printf("\t%05d\t%013d\t%+010d\t%010d\n",rollno[i],phy[i],math[i],per[i]);
}
