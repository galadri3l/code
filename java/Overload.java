class Overload
{
	int a,b;

	
	Overload(int l,int m)
	{
		a = l;b = m;
	}

	Overload(int l)
	{
		a = l;b=0;
	}
	Overload()
	{
		a=b=0;
	}

	int fun()
	{
		return a+b;
	}

	int fun(int p)
	{
		return p+a+b;
	}

	int fun(int p,int q)
	{
		return p+q+a+b;
	}
}

class Test
{
	public static void main(String arg[])
	{
		Overload o1 = new Overload(),o2 = new Overload(10),o3 = new Overload(10,20);
		System.out.println(o1.fun());
		System.out.println(o2.fun(30));
		System.out.println(o3.fun(40,50));
	}
}
