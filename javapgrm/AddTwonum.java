import java.awt.*;
import java.awt.event.*;
class AddTwonum extends Frame implements ActionListener,WindowListener
{
Label lbl1=new Label("First NUmber");
Label lbl2=new Label("Second number");
Label lbl3=new Label("Result");
TextField tf1=new TextField();
TextField tf2=new TextField();
TextField tf3=new TextField();
Button btnsum=new Button("Sum");
Button btnclose=new Button("close");
AddTwonum()
{
    setLayout(new GridLayout(5,2));
    add(lbl1);
    add(tf1);
    add(lbl2);
    add(tf2);
    add(lbl3);
    add(tf3);
    add(btnsum);
    add(btnclose);
    setVisible(true);
    setSize(500,500);
    btnclose.addActionListener(this);
    btnsum.addActionListener(this);
    addWindowListener(this);
}
public void  windowDeactivated(WindowEvent we)
{

}
public void windowActivated(WindowEvent we)
{

}
public void  windowDeiconified(WindowEvent we)
{

}
public void windowIconified(WindowEvent we)
{

}
public void windowClosed(WindowEvent we)
{

}
public void  windowClosing(WindowEvent we)
{
System.exit(0);
}
public void windowOpened(WindowEvent we)
{

}
public void actionPerformed(ActionEvent ae)
{
    if(ae.getSource()==btnclose)
    {
        System.exit(0);
    }
    if(ae.getSource()==btnsum)
    {
        int a=Integer.parseInt(tf1.getText());
        int b=Integer.parseInt(tf2.getText());
        int sum=a+b;
        tf3.setText(sum+"");
    }
}
public  static void main(String args[])
{
    new AddTwonum();
}
}
