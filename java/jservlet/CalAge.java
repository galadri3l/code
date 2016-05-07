import java.io.*;
import java.util.*;
import java.time.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class CalAge extends HttpServlet
{
	String msg;
	public int age_year,cur_year;
	public void init()
	{
		msg = "calculate your age";
	}
	public void doGet(HttpServletRequest request,HttpServletResponse response) throws ServletException,IOException
	{
		age_year = Year.now().getValue() - Integer.parseInt(request.getParameter("age"));
		//msg = request.getParameter("age");	
		response.setContentType("text/html");
		//request.getParameter("age");
		PrintWriter out = response.getWriter();
		out.println ( "<html>\n" +
		     "<head>\n" +
		     "<title> " + msg + "</title>\n"+
		     "</head> \n" +
		     "<body> \n"+
		     "<b>First Name : </b>" + request.getParameter("first_name")+"<br> \n"+
		     "<b>Last Name  : </b>" + request.getParameter("last_name")+"<br> \n" +
		     "<b>Age        : </b>" + Integer.toString(age_year) +"\n" +
		     "</body> \n"+
		     "</html> \n"
		     );
    }
    public void destroy()
    {
	//do nothing
    }
	public void doPost(HttpServletRequest request,HttpServletResponse response) throws ServletException,IOException
	{
		doGet(request,response);
	}
}
