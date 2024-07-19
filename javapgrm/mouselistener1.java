import java.awt.*;
import java.awt.event.*;
 class mouselistener1 extends Frame implements MouseListener,WindowListener
{
    int x,y;
    public void mouseExited(MouseEvent me){}
    public void mouseEntered(MouseEvent me) {} 
    public void mouseReleased(MouseEvent me){}
    public void mousePressed(MouseEvent me){}
    public void mouseClicked(MouseEvent me){
        x=me.getX();
        y=me.getY();
        repaint();

    }
    public void windowDeactivated(WindowEvent we){}
    public void windowActivated(WindowEvent we){}
    public void  windowDeiconified(WindowEvent we){}
    public void windowIconified(WindowEvent we) {}
    public void  windowClosed(WindowEvent we){}
    public void windowClosing(WindowEvent we) {
        System.exit(0);
    }
    public void windowOpened(WindowEvent we) {}
   
    public static void main(String args[])
    {
        new mouselistener1();
    }
    mouselistener1()
    {
        setVisible(true);
        setSize(500,500);
        addMouseListener(this);
        addWindowListener(this);
        
    }
    public void paint(Graphics g)
    {
        g.fillOval(x,y,50,50);
    }

}
