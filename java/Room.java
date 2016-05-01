import java.util.Scanner;
class Room
{
	float len,bre,het;
	float volume()
	{
		return len*bre*het;
	}
	
}

class Test
{
	public static void main(String a[])
	{
		Room rm1 = new Room(),rm2 = new Room();
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Input length,breadth and height of both rooms");
		rm1.len = sc.nextFloat();
		rm1.bre = sc.nextFloat();
		rm1.het = sc.nextFloat();
		rm2.len = sc.nextFloat();
		rm2.bre = sc.nextFloat();
		rm2.het = sc.nextFloat();
		System.out.println("Volume of room 1: "+ rm1.volume());
		System.out.println("Volume of room 2: "+ rm2.volume());
	}
}