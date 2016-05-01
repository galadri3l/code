class Pay
{
	public static void main(String arg[])
	{
		int r=10000,s=1,ram=0,shy=0,i=0;
		while(ram <= shy)
		{
			shy = shy + r;
			ram = ram + s;
			s = 2*s;
			i++;
		}
		System.out.println(i);
	}
}
		
