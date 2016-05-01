class Multi extends Thread {
	char operation = '+';
	double a,b;
	Multi(char op, double p,double q)
	{
		operation = op;a = p;b = q;
	}
	
	double arithmatic() {
		if(operation == '+')
			return a+b;
		else if(operation == '-')
			return a-b;
		else if(operation == '*')
			return a*b;
		else 
			return a/b;
	}

	public void run() {
		System.out.println(a + " " + operation + " " + b + " = " + arithmatic());
	}

	public static void main(String a[])
	{
		Multi t1 = new Multi('+',6,9);
		Multi t2 = new Multi('-',12,89);
		Multi t3 = new Multi('*',4,8);
		Multi t4 = new Multi('/',12,4);
		try {
		t1.start();t1.join();
		t2.start();t2.join();
		t3.start();t3.join();
		t4.start();t4.join();
		}catch(InterruptedException e){
			System.out.println(e);
		}
	}
}

