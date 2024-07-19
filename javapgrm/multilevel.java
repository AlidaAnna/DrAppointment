class grandparent
{
    void display()
    {
        System.out.println("I am grandparent");
    }
}
class parent extends grandparent{
    void display1()
    {
        System.out.println("I am parent");
    }
}
class child extends parent
{
    void display2()
    {
        System.out.println("i am child");
    }
}

class multilevel
{
public static void main(String args[])
{
 child c=new child();
 c.display();
 c.display1();
 c.display2();
}
}
