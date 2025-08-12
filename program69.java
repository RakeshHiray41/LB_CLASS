import java.util.Scanner;
class Digits
{
    
    public int CountFrequecy(int iNo)
    {   
        int iDigit = 0;
        int iCnt = 0;
        if(iNo <0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {   
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit == 5)
            { iCnt++;}
           
        }
        return iCnt;
    }
}
class program69
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number: ");
        int iValue = sobj.nextInt();
        Digits dobj = new Digits();

        int iRet = dobj.CountFrequecy(iValue);
        System.out.println("Count of 5 is : "+iRet);
    }
}