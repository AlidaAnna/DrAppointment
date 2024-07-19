 class invalidexception extends Exception
{
    invalidexception(String message) 
    {
     super(message);
    }
}
public class ownexception
{
public static void main(String args[])
{
      int age1=20;
      int age2=15;
   try
    {
      if(age1<18)
      {
        throw new invalidexception("at leaste 18");
      }
      else{
        System.out.println("valid");
      }
      if(age2<18)
      {
        throw new invalidexception("at least 18");
      }
        else
        {
            System.out.println("valid");
        }
      }
      catch(invalidexception e)
      {
        System.out.println("Exception "+e.getMessage());
      }
    }
   
}
