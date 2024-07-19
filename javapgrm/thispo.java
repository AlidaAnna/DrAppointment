import java.util.*;
class stud
{
    String name;
    int no;
    int m1,m2,m3;
    void setdetails(String name,int no,int m1, int m2, int m3)
    {
        this.name=name;
        this.no=no;
        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
    }
    void display()
    {
        System.out.println("Name:"+name+"\n"+"no:"+no+"\n"+"Mark1:"+m1+"\n"+"Mark2:"+m2+"\n"+"Mark3:"+m3);
    }
    void calcu()
    {
        int total=m1+m2+m3;
        System.out.println("Total:"+total);
    }
}
class thispo{
    public static void main(String args[])
    {
     stud s1=new stud();
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter name");
     String name=sc.nextLine();
     System.out.println("Enter Roll Number");
     int no=sc.nextInt();
     System.out.println("Enter mark1");
     int m1=sc.nextInt();
     System.out.println("Enter mark2");
     int m2=sc.nextInt();
     System.out.println("Enter mark3");
     int m3=sc.nextInt();
     s1.setdetails(name,no,m1,m2,m3);
     s1.display();
     s1.calcu();
    }
}
