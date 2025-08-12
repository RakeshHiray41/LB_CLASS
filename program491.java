import java.util.*;

class program491
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sret = str.replaceAll(" ","");

        System.out.println("Upadated string : "+sret);
        System.out.println("string length : "+sret.length());

    }
}