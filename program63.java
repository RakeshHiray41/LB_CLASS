import java.util.Scanner;
class Number
{
    public int SumNonfator(int iNo)
    {
        int iCnt = 0;
        int isum = 0;
        for(iCnt =1; iCnt < (iNo); iCnt++)
        {
            if((iNo % iCnt)!=0)
            {
                isum +=iCnt;
              
            }
        }
    
       return isum;
    }
}
class program63
{
    public static void main(String A[])
    {
        
        int iValue = 0;
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter  Number : ");

        iValue  = sobj.nextInt();

        Number nobj = new Number();

        iRet=nobj.SumNonfator(iValue);
        System.out.println("Summation of NonFactor is : "+iRet );
        
        
    }
}