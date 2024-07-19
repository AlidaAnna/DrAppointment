 class vari
 {
    int a=10; int b=20;
 }
class sum extends vari
{
    void sum()
    {
        int sum=a+b;
        System.out.println("Sum is :"+sum);
    }
}
class diff extends vari
{
    void diff()
    {
        int diff=a-b;
        System.out.println("differences is :"+diff);
    }
}
class mult extends vari{
    void mult()
    {
        int mul=a*b;
        System.out.println("product is :"+mul);
    }
}

class hirinheritances
{
    public static void main(String args[])
    {
     sum s=new sum();
     s.sum();
     diff d=new diff();
     d.diff();
     mult m=new mult();
     m.mult();
    }
}