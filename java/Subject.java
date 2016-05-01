interface Subject{
	void display();
}

class Sub1 implements Subject
{
	int marks;
	Sub1(int a)
	{
		marks = a;
	}
	public void display()
	{
		System.out.println("Sub1 : "+marks);
	}
}
class Sub2 implements Subject
{
	int marks;
	Sub2(int a)
	{
		marks = a;
	}
	public void display()
	{
		System.out.println("Sub2 : "+marks);
	}
}
class Sub3 implements Subject
{
	int marks;
	Sub3(int a)
	{
		marks = a;
	}
	public void display()
	{
		System.out.println("Sub3 : "+marks);
	}
}

class Test{
	public static void main(String arg[])
	{
		Sub1 p = new Sub1(50);
		Sub2 q = new Sub2(80);
		Sub3 r = new Sub3(90);
		p.display();q.display();r.display();
	}
}