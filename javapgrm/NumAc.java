import java.awt.*;
import java.awt.event.*;
class NumAc extends Frame implements ActionListener,WindowListener
{
Label lbl1=new Label("choice");
Choice ch=new Choice();
TextField tf=new TextField();
Button btnsave=new Button("save");
Button btnclose=new Button("close");
 NumAc()
 {
    setVisible(true);
    setLayout(new GridLayout(4,2));
    setSize(500,500);
    add(lbl1);
    add(ch);
    add(tf);
    add(btnsave);
    add(btnclose);
    btnclose.addActionListener(this);
    btnsave.addActionListener(this);
    addWindowListener(this);
     for(int i=0;i<101;i++)
     {
      ch.addItem(i+"");
     }
 }
 public void actionPerformed(ActionEvent ae)
 {
    if(ae.getSource()==btnclose)
    {
    System.exit(0);
    }
    if(ae.getSource()==btnsave)                                                     
    {
        int a=Integer.parseInt(ch.getSelectedItem());
        tf.setText(a+"");
    }
 }
 public void windowDeactivated(WindowEvent we){}
 public void windowActivated(WindowEvent we){}
 public void windowDeiconified(WindowEvent we){}
 public void windowIconified(WindowEvent we){}
 public void windowClosed(WindowEvent we){}
 public void windowClosing(WindowEvent we){
    System.exit(0);
 }
 public void  windowOpened(WindowEvent we) {}

 public static void main(String args[])
 {
    new NumAc();
 }
}