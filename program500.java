import java.util.*;

class Marvellous
{
    public static boolean CheckAnagram(String str1, String str2)
    {
        boolean bFlag = true;

        if(str1.length() != str2.length())
        {
            return false;
        }
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        int Count1[] = new int[26];
        int Count2[] = new int[26];

        int i = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            if(Arr[i] >'a' && Arr[i] < 'z')
            {
                Count1[Arr[i] -'a']++;
            }     
        }
        for( i = 0 ; i < Brr.length; i++)
        {
            if(Brr[i] >'a' && Brr[i] < 'z')
            {
                Count2[Brr[i] -'a']++;
            }     
        }
        for(i = 0 ; i < 26; i++)
        {
            if(Count1[i] != Count2[i])
            {
                bFlag = false;
                break;
            }
        }
        return  bFlag;


    }
}
class program499
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second String : ");
        String str2 = sobj.nextLine();

        boolean bret = Marvellous.CheckAnagram(str1,str2);

        if(bret == true)
        {
            System.out.println("Strings are Anagram");
        }
        else
        {
            System.out.println("String are not Anagram");
        }
        
    }
}