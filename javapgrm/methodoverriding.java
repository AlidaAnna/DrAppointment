class animal
{
 void make_sound()
 {
    System.out.println("Animal cry");
 }
}
class dog extends animal
{
    void make_sound()
    {
        System.out.println("dog braks");
    }
}
class cat extends animal
{
 void make_sound()
 {
    System.out.println("cat meow");
 }
}
class methodoverriding
{
    public static void main(String args[])
    {
    //  animal d= new dog();
    //  d.make_sound();
    //  animal c=new cat();
     // c.make_sound();
     // animal a=new animal();
     // a.make_sound();
     cat c=new cat();
     c.make_sound();
    }
}