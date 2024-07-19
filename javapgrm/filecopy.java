import java.awt.*;
import java.io.*;
import java.awt.event.*;
class filecopy extends Frame implements ActionListener
{
Label lb1=new Label("Enter the file to read");
Label lb2=new Label("Enter the file to copy");
TextField t1=new TextField();
TextField t2=new TextField();
Button bt1=new Button("SAVE");
Button bt2=new Button("CANCEL");
filecopy()
{
super("COPY");
setLayout(new GridLayout(5,2));
add(lb1);
add(t1);
add(lb2);
add(t2);
add(bt1);
add(bt2);
setSize(500,500);
setVisible(true);
bt1.addActionListener(this);                                                                                       
bt2.addActionListener(this);
}
public static void main(String args[])
{
new filecopy();
}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==bt2)
{
System.exit(0);
}
if(ae.getSource()==bt1)
{
try
{
FileReader fr=new FileReader(t1.getText());
String c="";
int x;
while((x=fr.read())!=-1)
{
c=c+(char)x;
}
fr.close();
FileWriter fw=new FileWriter(t2.getText());
fw.write(c);
fw.close();
}catch(Exception e)
{
System.out.println(e);
}
}
}
}