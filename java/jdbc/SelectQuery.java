import java.sql.*;
public class SelectQuery
{
	public static void main(String args[])
	{
		try{
			Class.forName("org.mariadb.jdbc.Driver");
			Connection c = DriverManager.getConnection("jdbc:mariadb://localhost:3306/test","yash","feynmandirac");
			System.out.println("Database opened successfully");
			Statement st = c.createStatement();
			String sql = "select * from student;";
			ResultSet r = st.executeQuery(sql);
			System.out.println("SNO\tNAME\tSECTION\tMARKS");
			while(r.next())
			{
				int sn = r.getInt("sn");
				String name = r.getString("name");
				String section = r.getString("section");
				int marks = r.getInt("marks");
				System.out.println(sn + "\t" + name + "\t" + section + "\t" + marks);
			}
			r.close();
			st.close();
			c.close();
		}catch(Exception e){
			System.out.println(e);
			System.exit(0);
		}
		System.out.println("Query executed successfully.");
	}
}