class one extends threadr{
 void run()
 {
    for(int i=0;i<5;i++)
    {
        System.out.println(i);
    }
 }
}
class two extends threadr{
    void run()
    {
       for(int i=5;i<10;i++)
       {
           System.out.println(i);
       }
    }
   }

public class thread2 {
    public static void main(String args[])
    {
        one o=new one();
        two t=new two();
        o.run();
        t.run();
    }
}
