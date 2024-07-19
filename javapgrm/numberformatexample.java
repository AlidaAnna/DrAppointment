public class numberformatexample {
    public static void main(String args[])
    {
        String invalid_number="1234a";
      try
      {
        int num=Integer.parseInt(invalid_number);
        System.out.println(num);
      }
      catch(NumberFormatException e)
      {
        System.out.println("Number format Exception "+e.getMessage());
      }
    }
}
