class DemoThread extends Thread{
	public void run() {
		for(int i=0;i<10;i++)
			System.out.println(i);
	}
	public static void main(String a[])
	{
		DemoThread t1 = new DemoThread();
		DemoThread t2 = new DemoThread();
		try{
		t1.start();t1.join();
		t2.start();
		for(int i=10;i<20;i++){
			System.out.println(i);
			Thread.sleep(200);
			t2.stop();
		}
		}catch(InterruptedException e){
			System.out.println(e);
		}
	}
}

