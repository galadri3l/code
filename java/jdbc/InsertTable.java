import java.sql.*;
public class InsertTable
{
	public static void main(String args[])
	{
		try{
			Class.forName("org.mariadb.jdbc.Driver");
			Connection c = DriverManager.getConnection("jdbc:mariadb://localhost:3306/test","yash","feynmandirac");
			c.setAutoCommit(false);
			System.out.println("Database opened successfully");
			Statement st = c.createStatement();
			String sql = "insert into student values(1,'RAM', 'A', 50)";
			st.executeUpdate(sql);
			sql = "insert into student values(2,'AMY', 'A', 60)";
			st.executeUpdate(sql);
			sql = "insert into student values(3,'Fay', 'C', 89)";
			st.executeUpdate(sql);
			sql = "insert into student values(4,'Ray', 'D', 98)";
			st.executeUpdate(sql);
			sql = "insert into student values(5,'Jay', 'F', 69)";
			st.executeUpdate(sql);
			sql = "insert into student values(6,'Elvin', 'E', 70)";
			st.executeUpdate(sql);
			st.close();
			c.commit();
			c.close();
		}catch(Exception e){
			System.out.println(e);
			System.exit(0);
		}
		System.out.println("Data inserted successfully.");
	}
}