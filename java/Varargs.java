class Varargs
{
	int addition(int ... v)
	{
		int sum=0;
		for(int i=0;i<v.length;i++)
			sum = sum + v[i];
		return sum;
	}
	
	public static void main(String args[])
	{
		Varargs var = new Varargs();
		System.out.println("The sum is = "+var.addition(11,2,3,5,6,7));
	}
}