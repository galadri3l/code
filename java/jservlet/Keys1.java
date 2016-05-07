
import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;
public class Keys1 extends Applet implements KeyListener{
TextField input;
TextField output1;

public void init(){

input = new TextField(30);
input.addKeyListener(this);
output1 = new TextField(30);
add(input);
add(output1);
}
public void keyTyped(KeyEvent event){

}

public void keyPressed(KeyEvent event){
char char1 = event.getKeyChar();
output1.setText("You pressed "+char1);
}

public void keyReleased(KeyEvent event) {

}

}

/*
<applet code="Keys1.class" height="300" width="300">
</applet>
*/
