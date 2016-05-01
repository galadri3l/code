import java.sql.*;
public class CreateTable{
	public static void main(String args[])
	{
		try{
			Class.forName("org.mariadb.jdbc.Driver");
			Connection c = DriverManager.getConnection("jdbc:mariadb://localhost:3306/test","yash","feynmandirac");
			System.out.println("Database opened successfully");
			
			Statement st = c.createStatement();
			String sql = "create table student " +
						 "( sn int, " +
						 " name varchar(20), " +
						 " section char(1), " +
						 " marks int )";
			st.executeUpdate(sql);
			st.close();
			c.close();
		}catch (Exception e){
			System.out.println(e);
			System.exit(0);
		}
		System.out.println("Table created successfully");
	}
}