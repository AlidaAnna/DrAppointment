import java.applet.*;
import java.awt.*;
public class applet2 extends Applet {
    public void paint(Graphics g)
    {
        g.setColor(Color.BLACK);
        g.drawString("Alida",200,200);
        g.fillOval(20,50,200,200);
        g.drawOval(20,50,200,200);
    }
}
