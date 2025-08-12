import java.util.Scanner;
class Number
{
    public void Sum(int iNo)
    {
        int iCnt = 0;
        int isum1 = 0;
        int isum2 = 0;
        for(iCnt =1; iCnt < (iNo); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                isum1+=iCnt;
            }
            else
            {
               
              isum2 +=iCnt;
            }
        }
    
     System.out.println("Summation of factor: "+isum1);
     System.out.println("Summation of Nonfactor: "+isum2);
    }
}
class program64
{
    public static void main(String A[])
    {
        
        int iValue = 0;
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter  Number : ");

        iValue  = sobj.nextInt();

        Number nobj = new Number();

        nobj.Sum(iValue);
       
        
        
    }
}