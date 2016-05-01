import java.sql.*;

public class OpenDatabase {
	public static void main(String args[]){
		Connection c;
		try{
			Class.forName("org.mariadb.jdbc.Driver");
			c = DriverManager.getConnection("jdbc:mariadb://localhost:3306/test","yash","feynmandirac");
		}catch(Exception e){
			System.out.println(e);
			System.exit(0);
		}
		System.out.println("Database Opened Successfully");
	}
}