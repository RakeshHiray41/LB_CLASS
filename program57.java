import java.util.Scanner;

class Arithmetic
{
    public int Addition(int iNo1 ,int iNo2)
    {
        int iAns = 0;
        iAns  = iNo1 + iNo2 ;
        return iAns;
    }
}

class program57
{
    
    public static void main(String A[])
    {
        int iValue1=0 ,iValue2  = 0,iRet = 0;
        Scanner sobj = null;

        sobj = new Scanner(System.in);
        
        System.out.println("Enter First no: ");
        iValue1  = sobj.nextInt();

        System.out.println("Enter Second no: ");
        iValue2  = sobj.nextInt();

        Arithmetic aobj = new Arithmetic();

        iRet = aobj.Addition(iValue1,iValue2);
        System.out.println("Addition is : "+iRet);
    
    }
}