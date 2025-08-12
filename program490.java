import java.util.*;

class program490
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sret = str.trim();

        System.out.println("Upadated string : "+sret);
        System.out.println("string length : "+sret.length());

    }
}