 interface animal
 {
    void sound();
    void eat();
 }
 class dog implements animal{
  public void sound()
  {
   System.out.println("brack");
  }
  public void eat()
  {
    System.out.println("bone");
  }
 }
 

 class interface1 {
    public static void main(String args[])
    {
        dog  d= new dog();
        d.sound();
        d.eat();
    }
}
