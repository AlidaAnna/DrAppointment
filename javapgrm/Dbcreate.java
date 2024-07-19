import java.sql.*;
import java.util.Scanner;
class Dbcreate
{
    public static void main(String args[])throws Exception
    {

        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con=DriverManager.getConnection("jdbc:mysql://server.nirmalamca.com/db_mca23032","mca23032","N_mca23032");
        Statement st=con.createStatement();
        st.executeUpdate("create table nirmala1(roll_no int,name varchar(20))");

    }
}
