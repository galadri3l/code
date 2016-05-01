import java.util.*;
class ArrayException
{
	
	public static void main(String args[])
	{
		try{
			int a[] = new int[10];
			Scanner sc = new Scanner(System.in);
			int n = sc.nextInt();
			a[n] = 5;
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("Index Greater than size: "+e);
		}
	}
}