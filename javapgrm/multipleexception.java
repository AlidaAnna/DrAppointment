public class multipleexception
 {
    public static void main(String args[])
    {
        try{
      int[] number={1,2,3};
      System.out.println(number[5]);
      String t=null;
      System.out.println(t.length());
    }
    catch(ArrayIndexOutOfBoundsException e)
    {
        System.out.println("arrayindexoutof boundexception"+e.getMessage());
    }
    catch(NullPointerException e)
    {
        System.out.println("Nullpointer exception:"+e.getMessage());
    }
    catch(Exception e)
    {
    System.out.println("other exception"+e.getMessage());
    }
}
 }
