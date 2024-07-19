interface animal{
    void sound();
    void eat();
}
interface bird{
    void cry();
}
class Livingbeign
{
    void breath()
    {
    System.out.println("living beging breath");
    }
}
class dog extends Livingbeign implements animal,bird
{
    public void sound()
    {
        System.out.println("brak");
    }
    public void eat()
    {
        System.out.println("bone");
    }
    public void cry()
    {
        System.out.println("weweeee");
    }
}

public class multipleinterface_parentclass {
    public static void main(String args[])
    {
      dog g=new dog();
      g.sound();
      g.eat();
      g.cry();
      g.breath();
    }
}
