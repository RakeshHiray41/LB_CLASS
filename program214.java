// input : HeLLo
// ouput : #e##o
import java.util.Scanner;

class MarvellousString
{
    public String str;

    public MarvellousString(String A)
    {
        this.str = A; 
    }
    public int CountSmall()
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0,iCount = 0;

        for(iCnt = 0;iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >='a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
        
    }
    public String UpadateSrting()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;

        for(iCnt = 0;iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >='A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = '#';
            }
        }
        String ret = new String(Arr);

        return ret;
    }
}

class program214
{
    public static void main(String A[] )
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        String sRet = null; 

        sRet = mobj.UpadateSrting();
        
        System.out.println("Upadated string is : "+ sRet);
        
    }
}

