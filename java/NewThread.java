class NewThread implements Runnable{
	public void run(){
		try{
			for(int i=5;i>0;i--){
				System.out.println("Child Thread: " + i);
				Thread.sleep(1500);
			}
		}catch(InterruptedException e){
				System.out.println("Child Interrupted");
		}
		System.out.println("Child Thread exiting");
	}
}
class ENewThread extends Thread {
	ENewThread(String name){
		super(name);
		System.out.println("Child Thread: "+ this);
	}
	public void run(){
		try{
			for(int i=5;i>0;i--){
				System.out.println(getName() + " : " + i);
				this.sleep(1000);
			}
		}catch(InterruptedException e){
				System.out.println("Child Interrupted");
		}
		System.out.println("Child Thread exiting");
	}
}
class Test{
	public static void main(String argp[])
	{
		//Thread t = new Thread(new NewThread());
		ENewThread t1 = new ENewThread("one");
		ENewThread t2 = new ENewThread("two");
		ENewThread t3 = new ENewThread("three");
		t1.start();t2.start();t3.start();
		
		try{
			t1.join();t2.join();t3.join();
			for(int i=5;i>0;i--){
				System.out.println(Thread.currentThread().getName() + " : " +i);
				//Thread.sleep(10000);
			}
		}catch(InterruptedException e){
			System.out.println("Main thread interrrupted");
		}
		System.out.println("Main Thread exiting");
	}
}