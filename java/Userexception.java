class MyException extends Exception {
	public String toString() {
		return "MyException occoured";
	}
}

class Userexception {
	void checkException(int a,int b) throws MyException
	{
		if(a < b)
			throw new MyException();
	}
}

class Test {
	public static void main(String args[])
	{
		try{
			Userexception u = new Userexception();
			u.checkException(1,5);
		}catch(MyException e){
			System.out.println(e);
		}
	}
}
