import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class Helloform extends HttpServlet {
    String message;
    int age;

    public void init() throws ServletException
    {
	message = "Give data using GET method";
    }

    public void doGet(HttpServletRequest request,HttpServletResponse response) throws ServletException, IOException
    {
	response.setContentType("text/html");
	PrintWriter out = response.getWriter();
	out.println ( "<html>\n" +
		     "<head>\n" +
		     "<title> " + message + "</title>\n"+
		     "</head> \n" +
		     "<body> \n"+
		     "<b>First Name : </b>" + request.getParameter("first_name")+"<br> \n"+
		     "<b>Last Name : </b>" + request.getParameter("last_name")+"\n" +
		     "</body> \n"+
		     "</html> \n"
		     );
    }
    public void destroy()
    {
	//do nothing
    }
}
		  
	
