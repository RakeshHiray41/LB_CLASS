// _ _ _ _India_ _ _ is _ my country_ _ _ _
// After trim
//    India_ _ _is_my_ _country

import java.util.*;

class program518
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        char Arr[] = str.toCharArray();
        int iCount = 0,i = 0;
        for( i = 0; i < Arr.length ; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        }
        
        System.out.println("Number of words : "+(iCount+1));
    }
}