import java.util.Scanner;
class Digits
{
    
    public void DisplayEven(int iNo)
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
            if((iDigit % 2) ==0)
            { 
                System.out.println(iDigit);
                    // iCnt++;
            }
           
        }
        // return iCnt;
    }
}
class program70
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter number: ");
        int iValue = sobj.nextInt();
        Digits dobj = new Digits();

        // int iRet =
         dobj.DisplayEven(iValue);
        // System.out.println("Count of even : "+iRet);
    }
}