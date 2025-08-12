// _ _ _ _India_ _ _ is _ my country_ _ _ _
// After trim
//    India_ _ _is_my_ _country

import java.util.*;

class program515
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("a","x");
        
        System.out.println("updated str : "+str);
    }
}