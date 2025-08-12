import java.util.*;

class program496
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        int Count[] = new int[26];
    int i = 0;
        char Arr[] = str.toCharArray();

        for( i = 0 ; i < Arr.length; i++)
        {
               if(Arr[i] == Arr[j])
                {
                    Count[Arr[i] -Arr[j]]++;
                }
                
        
        }
        for(i = 0 ; i < 26; i++)
        {
            System.out.println("Frquency of a : "+(char)(i+'a')+"is : "+Count[i]);
        }
        
    }
}