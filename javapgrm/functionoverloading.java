import java.util.*;
class sum{
    int a,b,c,s;
    void calcu(int a, int b)
    {
     s=a+b;
     System.out.println("Sum of two number is :"+s);
    }
    void calcu(int a,int b,int c)
    {
        s=a+b+c;
        System.out.println("Sum of three number is:"+s);
    }
}
class functionoverloading
{
    public static void main(String args[])
    {
    sum s1=new sum();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter two number");
    int a=sc.nextInt();
    int b=sc.nextInt();
    System.out.println("Enter three number");
    int a1=sc.nextInt();
    int b1=sc.nextInt();
    int c1=sc.nextInt();
    s1.calcu(a,b);
    s1.calcu(a1,b1,c1);
    }
}