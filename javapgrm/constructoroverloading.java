import java.util.*;
class tri
{
int l,b;
  tri(int l)
  {
    this.l=l;
    b=4;
    area();
  }
  tri(int l,int b)
  {
    this.l=l;
    this.b=b;
    area();
  }
  tri()
  {
    l=4;
    b=5;
    area();
  }
  void area(){
  int a=l*b;
  System.out.println("Area of triangle is"+a);
  }

}
class constructoroverloading
{
    public static void main(String args[])
    {
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter length");
     int l=sc.nextInt();
     tri t1=new tri(l);
     //t1.area();
     System.out.println("Enter length");
     int l1=sc.nextInt();
     System.out.println("Enter breadth");
     int b=sc.nextInt();
     tri t2=new tri(l1,b);
     tri t3=new tri();
    }
}