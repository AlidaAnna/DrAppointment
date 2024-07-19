class stud
{
    void number(int no)
    {
      System.out.println("Roll no:"+no) ;
    }
}
class sub extends stud{
 void  subject(char c)
 {
  System.out.println("Subject is :"+c);
 }
}
class mark extends  sub{
    void marks( int m)
    {
        System.out.println("Mark is :"+m);
    }
}

class multilevelinheritances {
    public static void main(String args[])
    {
     mark m=new mark();
     m.number(5);
     m.subject('c');
     m.marks(20);

    }
}
