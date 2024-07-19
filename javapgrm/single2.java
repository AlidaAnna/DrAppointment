class parent
{
    void display()
    {
        System.out.println("Hai i am parent");
    }
}
class child extends parent{
    void message()
    {
        System.out.println("Hai  i am the child of the abouve parent i have all features of my parent");
    }
}

class single2
{
    public static void main(String args[])
    {
     child c=new child();
     c.display();
     c.message();
    }
}
