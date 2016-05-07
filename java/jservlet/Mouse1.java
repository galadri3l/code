import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class Mouse1 extends Applet
   implements MouseListener, MouseMotionListener {

   int width, height;
   boolean isButtonPressed = false;

   public void init() {
      setBackground( Color.black );
      addMouseListener( this );
      addMouseMotionListener( this );
   }

   public void mouseEntered( MouseEvent e ) {
      // called when the pointer enters the applet's rectangular area
   }
   public void mouseExited( MouseEvent e ) {
      // called when the pointer leaves the applet's rectangular area
   }
   public void mouseClicked( MouseEvent e ) {
      // called after a press and release of a mouse button
      // with no motion in between
      // (If the user presses, drags, and then releases, there will be
      // no click event generated.)
   }
   public void mousePressed( MouseEvent e ) {  // called after a button is pressed down
      isButtonPressed = true;
      setBackground( Color.red );
      repaint();
      // "Consume" the event so it won't be processed in the
      // default manner by the source which generated it.
      e.consume();
   }
   public void mouseReleased( MouseEvent e ) {  // called after a button is released
      isButtonPressed = false;
      setBackground( Color.black );
      repaint();
      e.consume();
   }
   public void mouseMoved( MouseEvent e ) {  // called during motion when no buttons are down
       }
   public void mouseDragged( MouseEvent e ) {  // called during motion with buttons down
       }

   public void paint( Graphics g ) {
      if ( isButtonPressed ) {
         g.setColor( Color.black );
      }
      else {
         g.setColor( Color.gray );
      }
   }
}

/*
<applet code="Mouse1.class" height="300" width="300">
</applet>
*/
