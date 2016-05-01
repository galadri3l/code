import java.util.Scanner;
class Pat
{
	public static void  main(String args[])
{
	int n,i,j;
	Scanner sc = new Scanner(System.in);
	System.out.println("Input value of 'n'");
	n = sc.nextInt();
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1){
				System.out.format("%02d ",j);
				continue;
			}
			else if(i==n){
				System.out.format("%02d ",(3*n-j-1));
				continue;
			}
			else if(j==1){
				System.out.format("%02d ",(n-1)*4 - (i-2));
				continue;
			}
			else if(j==n){
				System.out.format("%02d",n+i-1);
				continue;
			}
			else
			System.out.print("   ");
		}
		System.out.print("\n");
	}
}
}


