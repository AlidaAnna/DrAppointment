class add
{
    int h,m,s;
    void setdetails(int h,int m,int s)
    {
        this.h=h;
        this.m=m;
        this.s=s;
    }
    void display1()
    {
     System.out.println("First time H:M:S"+h+":"+m+":"+s);
    }
    void calcu(add t1,add t2,add t3)
    {
        t3.h=t1.h+t2.h;
        t3.m=t1.m+t2.m;
        t3.s=t1.s+t2.s;
        if(s>=60)
        {
            m++;
            s=s%60;
        }
        if(m>=60)
        {
            h++;
            m=m%60;
        }
        System.out.println(":H:min:sec"+h+":"+m+":"+s);
    }
}
class sumoftime
{
    public static void main(String args[])
    {
    add t1=new add();
    t1.setdetails(9,20,30);
    add t2=new add();
    t2.setdetails(8,23,32);
    t1.display1();
    t2.display1();
    add t3=new add();
    t3.calcu(t1,t2,t3);

    }
}