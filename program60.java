import java.util.Scanner;
class Number
{
    public void DisplayFactor(int iNo)
    {
        int iCnt = 0;
        int isum = 0
        for(iCnt =1; iCnt <=(iNo/2); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                System.out.println(iCnt);
                isum += iCnt;
            }
        }
        System.out.println(isum);
       
    }
}
class program60
{
    public static void main(String A[])
    {
        
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter  Number : ");

        iValue  = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayFactor(iValue);

        
    }
}