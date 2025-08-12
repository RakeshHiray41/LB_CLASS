import java.util.Scanner;
class Digits
{
    public int CountDigit(int iNo)
    { 
        int iDigit = 0;
    int iCnt = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iCnt++;
        }
        return iCnt;
    }
}
class program65
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number: ");
        int iValue = sobj.nextInt();
        Digits dobj = new Digits();

        int iRet = dobj.CountDigit(iValue);
        System.out.println("Number of Digits is : "+iRet);
    }
}