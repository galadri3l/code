package foo;
class A
{
	int a=1,b=2;
}
class B extends A
{
	int c=3;
}
class C extends B
{
	int d=4;
	int a=7;
	
	public static void main(String a[])
	{
		C n_c = new C();
		System.out.println(n_c.d);
		System.out.println(n_c.c);
		System.out.println(n_c.a);

	}
}


