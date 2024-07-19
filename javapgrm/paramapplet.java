 import java.applet.*;
 import java.awt.*;
 public class paramapplet extends Applet
 {
    public void paint(Graphics g)
    {
        String str=getParameter("msg");
        g.drawString(str,150,150);
    }

}
