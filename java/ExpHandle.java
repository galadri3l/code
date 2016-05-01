import java.util.Scanner;
class CustomArithmaticException extends Exception{
	public String toString()
	{
		return "Log(0) not defined";
	}
}

class ExpHandle
{
	double num;
	double findLog() throws CustomArithmaticException
	{
		if(num == 0.)
			throw new CustomArithmaticException();
		return Math.log(num);
		
	}
}

class Test{
	public static void main(String[] arg)
	{	
		Scanner sc = new Scanner(System.in);
		try{
			ExpHandle ex = new ExpHandle();
			System.out.println("Input number");
			ex.num = sc.nextDouble();
			System.out.println("log (" + ex.num +") = "+ex.findLog());
	}catch(CustomArithmaticException e){
			System.out.println(e);
		}
	}
}