import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.io.*;
import javax.swing.*;
class menu extends Frame implements ActionListener,ItemListener
{
    Menu mf=new Menu("File");
    MenuBar mb=new MenuBar();
    MenuItem mi1=new MenuItem("open");
    MenuItem mi2=new MenuItem("close");   
    Menu mv=new Menu("View");
    MenuBar mb1=new MenuBar();
    MenuItem mi3=new MenuItem("Bold");
    MenuItem mi4=new MenuItem("Italic");
    MenuItem mi5=new MenuItem("Bold+Italic");
    Label lbl1=new Label("Enter file");
    Label lbl2=new Label("content");
    TextField tf1=new TextField();
    TextArea tf2=new TextArea();
    Checkbox ch=new Checkbox("");

    menu() 
    {
        setVisible(true);
        setLayout(new GridLayout(2,2));
        setSize(500,500);
        mb.add(mf);
        setMenuBar(mb);
        mf.add(mi1);
        mf.add(mi2);
        mb.add(mv);
        setMenuBar(mb);
        mv.add(mi3);
        mv.add(mi4);
        mv.add(mi5);
        add(lbl1);
        add(tf1);
        add(ch);
        add(lbl2);
        add(tf2);
        mi2.addActionListener(this);
        mi1.addActionListener(this);
        mi3.addActionListener(this);
        mi4.addActionListener(this);
        mi5.addActionListener(this);
        ch.addItemListener(this);
    }
    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource()==mi2)
        {
            System.exit(0);
        }
        if(ae.getSource()==mi1)
        {
           try{
            FileReader fr=new FileReader(tf1.getText());
           String c="";
           int x;
           while((x=fr.read())!=-1)
           {
            c=c+(char)x;
           }
           fr.close();
           tf2.setText(c);
           }
           catch(Exception e)
           {
            System.out.println(e);
           }
        }
        if(ae.getSource()==mi3)
        {
            Font f=new Font("Dialogue",Font.BOLD,5);
            tf2.setFont(f);
        }
        if(ae.getSource()==mi4)
        {
            Font f=new Font("Dialogue",Font.ITALIC,5);
            tf2.setFont(f);
        }
        if(ae.getSource()==mi5)
        {
            Font f=new Font("Dialogue",Font.ITALIC|Font.BOLD,5);
            tf2.setFont(f);
        }

    }
    public void  itemStateChanged(ItemEvent ie){
        if(ch.getState())
        {
            tf1.setEditable(true);
        }
        else{
            tf1.setEditable(false);
        }
    }
    public static void main(String args[])
    {
        new menu();
    }
}