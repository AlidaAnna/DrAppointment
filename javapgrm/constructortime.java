import java.util.*;
class time
{
    int h,m,sec;
    int s=0;
    time(int h,int m,int sec)
    {
        this.h=h;
        this.m=m;
        this.sec=sec;
    }
    void calcu()
    {
        s=h*60*60+m*60+sec;
        System.out.println("Time in second is"+s);
    }
}
class constructortime
{
    public static void main(String args[])
    {
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter hour");
     int h=sc.nextInt();
     System.out.println("Enter minute");
     int m=sc.nextInt();
     System.out.println("Enter second");
     int sec=sc.nextInt();
     time t1=new time(h,m,sec);
     t1.calcu();
   

    }
}