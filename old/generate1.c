/* program generate1.c
   computes sin( 6*Pi*(x^2+y^2)) on a square 100 points
   grid and print the result as an 100-square array
   on the standard output 
*/


#include <stdio.h>
#include <math.h>
#define Grid_size 100

main()
{
int i,j;
double x;
double ui,uj;

for(i=0;i<Grid_size;i++)
	{
	ui = (double)(i-Grid_size/2)/Grid_size;	
       	for(j=0;j<Grid_size;j++)
		{
		uj = (double)(j-Grid_size/2)/Grid_size;	
		x = sin( 6*M_PI*(ui*ui + uj*uj) ) ;
		printf("%5.3lf\t",x);	/* print x followed by a tab */
		}
	printf("\n");		/* put a "return" */
	}
}
