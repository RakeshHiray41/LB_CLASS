import java.util.*;

class StringX
{

    public static String Trim(String str)
    {
        int i = 0;
        int iStart = 0,iEnd = 0;
        
        char Arr[] = str.toCharArray();// _ _ _Jay_ _Ganesh_ _ _

        if(Arr[0] == ' ')
        {
            
            while((Arr[i] == ' ') && (i < Arr.length))
            {
                i++;
            }
        }
        iStart = i;

        i = 0;
        i = Arr.length - 1;

        if(Arr[Arr.length - 1] == ' ')
        {
           
            while(Arr[i] == ' ')
            {
                i--;
            }
        }
        iEnd = i;
        
        // String(Array_name,start,count)
        return new String(Arr,iStart,iEnd-iStart+1);

    }
}

class program489
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        String sret = StringX.Trim(str);

        System.out.println("Upadated string : "+sret);
        System.out.println("string length : "+sret.length());

    }
}