import java.awt.*;
import java.awt.event.*;
import java.io.*;
class fileread extends Frame implements ActionListener
{
    Label lbl1=new Label("Enter the file name");
    Label lbl2=new Label("Content");
    TextField tf1=new TextField("");
    TextArea  ta1=new TextArea();
    Button btnsave=new Button("Save");
    Button btnclose=new Button("close");
    fileread()
    {
        setLayout(new GridLayout(3,2));
        setVisible(true);
        setSize(500,500);
        add(lbl1);
        add(tf1);
        add(lbl2);
        add(ta1);
        add(btnsave);
        add(btnclose);
        btnsave.addActionListener(this);
        btnclose.addActionListener(this);

    }    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource()==btnclose)
        {
            System.exit(0);
        }
        if(ae.getSource()==btnsave)
        try
        {
         FileReader fr=new FileReader(tf1.getText());
         String c="";
         int x;
         while((x=fr.read())!=-1)
         {
         c=c+(char)x;
         }
         fr.close();
        ta1.setText(c);
        }
        catch(Exception e)
        {
         System.out.println(e);
        }
    }
    public static void main(String args[])
    {
        new fileread();
    }
}
