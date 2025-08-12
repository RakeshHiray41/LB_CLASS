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
        
        

        char brr[] = new char[iEnd-iStart+1];
        int j = 0;
        for(i = iStart, j = 0 ; i <= iEnd ; i++,j++)
        {
            brr[j] = Arr[i];
        }

        return new String(brr);

    }
}

class program487
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        char Arr[] = {'a','b','c','d','e','f'};

        String 
    }
}