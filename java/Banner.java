import java.awt.*;
import java.applet.*;

public class Banner extends Applet 
implements Runnable{
   int p=250, d =0,p1=0,d1=504;
   Thread t,t1 ;
   boolean b;
   public void init() {
      setBackground(Color.white);
      setForeground(Color.blue);
   }
   public void start() {
      t = new Thread(this);
      b = false;
      t.start();
   }
   public void run () {
      for( ; ; ) {
      try {
         repaint();
         Thread.sleep(100);
      }
      catch(InterruptedException e) {}
      }
   }
   public void paint(Graphics g) {
	  Font newFont = new Font("Courier", Font.BOLD, 20);
	  g.setFont(newFont);
	  g.drawString("Hello in TimesRoman",240,250);
	  g.drawRect(20,20,60,60);
	  g.drawOval(p1,p1,d1,d1);
      g.drawOval(p,p,d,d);
	  if(b == false){
		  d1-=24;
		  p1+=12;
		  
		  d+=24;
		  p-=12;
		  if(d==504 )
			  b = true;
	  }
	  else{
		  d1+=24;
		  p1-=12;
		  
		  d-=24;
		  p+=12;
		  if(d==0)
			  b = false;
	  }
   }
}
/*
<applet code="Banner.class" width="504" height="504">
</applet>
*/
