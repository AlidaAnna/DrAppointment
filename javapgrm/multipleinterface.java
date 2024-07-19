interface animal
 {
    void sound();
    void eat();
 }
 interface bird
 {
    void cry();
 }
 class dog implements animal,bird{
  public void sound()
  {
   System.out.println("brack");
  }
  public void eat()
  {
    System.out.println("bone");
  }
  public void cry()
  {
    System.out.println("weeweee");
  }
 }
 

 class multipleinterface {
    public static void main(String args[])
    {
        dog  d= new dog();
        d.sound();
        d.eat();
        d.cry();
    }
}
