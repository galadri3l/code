import java.util.Scanner;
class BinSearch 
{
	int a[] = new int[100],n,ele;
	int binsearch()
	{
		int lower = 0,upper= n - 1,i,mid;
		while(lower<=upper)
		{
		mid = (upper + lower)/2;
		if(ele > a[mid])
			lower = mid+1;
		else if(ele < a[mid])
			upper = mid-1;
		else
		{
			i = mid;
			return i;
		}
		}
		i = -1;
		return i;
	}
}
class Test
{
	public static void main(String arg[])
	{
		BinSearch b=new BinSearch();
		Scanner sc = new Scanner(System.in);
		System.out.println("Input size");
		b.n = sc.nextInt();
		System.out.println("Input array");
		for(int i=0;i<b.n;i++)
			b.a[i] = sc.nextInt();
		System.out.println("Input element to search");
		b.ele = sc.nextInt();
		System.out.println("Element found at " + b.binsearch());
	}
} 	
	
	
	

				
	
		