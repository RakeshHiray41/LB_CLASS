import java.util.*;

class program485
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sret =  str.replaceAll("a","A");

        System.out.println("Upated String is : "+sret);
    }
}