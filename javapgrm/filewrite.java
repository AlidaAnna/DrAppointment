import java.awt.*;
import java.awt.event.*;
import java.io.*;
class filewrite extends Frame implements ActionListener
{
    Label lbl1=new Label("Enter the file name:");
    Label lbl2=new Label("Enter the content:");
    TextField t1=new TextField();
    TextField t2=new TextField();
    Button bt1=new Button("SAVE");
    Button bt2=new Button("CANCEL");
    filewrite()
    {
    super("write");
    setLayout(new GridLayout(5,2));
    add(lbl1);
    add(t1);
    add(lbl2);
    add(t2);
    add(bt1);
    add(bt2);
    setSize(500,500);
    setVisible(true);
    bt1.addActionListener(this);
    bt2.addActionListener(this);
    }
    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource()==bt2)
        {
         System.exit(0);
        }
         if(ae.getSource()==bt1)
         try{
            String c ="";
            FileWriter fw=new FileWriter(t1.getText());
            fw.write(t2.getText());
            fw.close();
         }
         catch(Exception e)
         {
            System.out.println(e);
         }
    }
    public static void main(String args[])
{
new filewrite();
}
}