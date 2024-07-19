class area
{
void cal(int l,int b)
{
    int a;
    a=l*b;
    System.out.println("Area is:"+a);
}
}
class volume extends area
{
void calcu(int l,int b,int h)
{
    super.cal(l,b);
    int v=l*b*h;
    System.out.println("Volume is"+v);
}
}
class singleinheritances
{
    public static void main(String args[])
    {
     volume v=new volume();
     v.calcu(2,3,4);
    }
}