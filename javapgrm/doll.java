import java.applet.*;
import java.awt.*;
public class doll extends Applet{
    public void paint(Graphics g)
    {
        g.setColor(Color.YELLOW);
        g.fillOval(50,50,200,200);
        g.drawOval(50,50,200,200);
        g.setColor(Color.YELLOW);
        g.fillOval(50,250,200,200);
        g.drawOval(50,250,200,200);
        g.drawArc(1,7,100,100,0,90);
        g.drawArc(200,2,100,100,90,120);
        g.setColor(Color.red);
        g.fillOval(100, 100, 20, 20);
        g.drawOval(100,100,20,20);
        g.fillOval(150, 100, 20, 20);
        g.drawOval(150,100,20,20);
        int[] x={140,130,140};
        int[] y={150,160,160};
        int n=3;
        g.fillPolygon(x,y,n);
        g.drawPolygon(x,y,n);
        g.setColor(Color.black);
        g.fillRect(110,365,60,30);
        g.drawRect(110,365,60,30);
        g.drawArc(110,340,50,50,0,180);
        g.setColor(Color.red);
        g.drawLine(110,210,170,210);
        g.setColor(Color.black);
        g.fillRect(100,450,30,70);
        g.fillRect(150,450,30,70);
        g.drawRect(100,450,30,70);
        g.drawRect(150,450,30,70);

    }
}