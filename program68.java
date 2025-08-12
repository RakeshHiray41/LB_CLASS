import java.util.Scanner;
class Digits
{
    int iDigit = 0;
    int iCnt = 0;
    public int CountDigit(int iNo)
    {
if(iNo<0)
{iNo = -iNo;}
        while(iNo > 0)
        { 
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