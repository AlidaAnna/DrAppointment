class even implements Runnable{
     public void run()
    {
        for(int i=0;i<10;i=i+2)
        {
            System.out.println(i+"FirstThread");
        }
        try{
            Thread.sleep(2000);
        }
        catch(Exception e)
        {

        }
    }

}
class odd implements Runnable{
    public void run()
    {
        for(int i=1;i<10;i=i+2)
        {
            System.out.println(i+"second");
            try{
                Thread.sleep(2000);
            }
            catch(Exception e)
            {

            }
        }

    }

}
class threadinterface
{
    public static void main(String args[])
    {
      odd o=new odd();
      Thread t1=new Thread(o);
      even e=new even();
      Thread t2=new Thread(e);
      t1.start();
      t2.start();
    }
}