class Player
{
	static String nation;
	String name,game;

	Player(String nt,String na,String g)
	{
		nation = nt;
		name = na;
		game = g;
	}
	Player(String na,String g)
	{
		name = na;
		game = g;
	}
	static {
		nation = "India";
	}

	void show()
	{
		System.out.println("Name : "+name+" | Nation : "+nation+" | Game : "+game);
	}

	static void display()
	{
		nation = "Japan";
	}
}

class Test
{
	public static void main(String arg[])
	{
		Player p2 = new Player("Sachin","Cricket");
		p2.show();
		Player p1 = new Player("U.S.A","Babe Ruth","Baseball");
		p1.show();
		p1.display();
		p1.show();
	}
}
