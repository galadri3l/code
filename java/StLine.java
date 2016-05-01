import java.util.Scanner;
class StLine
{
	float x1,x2,y1,y2,m;
	
	StLine(float a,float b,float c,float d)
	{
		x1 = a;x2 = b;y1 = c;y2 = d;
		m=(y2-y1)/(x2-x1);

	}
		
	float slope()
	{
		return m;
	}
	
	float intercept()
	{
		float c = y1 - (m * x1);
		return c;
	}
}

class Test
{
	public static void main(String a[])
	{
		StLine st = new StLine(1,2,3,4);
		//System.out.println("Input two pts");
		//Scanner sc = new Scanner(System.in);
		//st.x1 = sc.nextFloat();
		//st.x2 = sc.nextFloat();
		//st.y1 = sc.nextFloat();
		//st.y2 = sc.nextFloat();
		System.out.format("Slope = %.2f and Intercept = %.2f\n",st.slope(),st.intercept());
	}
}
