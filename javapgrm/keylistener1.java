import java.awt.*;
import java.awt.event.*;
class keylistener1 extends Frame implements KeyListener
{
 keylistener1()
 {
    setVisible(true);
    setSize(500,500);
    addKeyListener(this);
 }
 public void  keyReleased(KeyEvent ke){}
 public void keyPressed(KeyEvent  ke){}
 public void keyTyped(KeyEvent ke){
    System.exit(0);
 }
 public static void main(String args[])
 {
    new keylistener1();
 }
 public void paint(Graphics g)
 {
    g.setColor(Color.BLUE);
    g.fillOval(10,20,100,100);
    g.drawOval(10,20,100,100);
 }
}
