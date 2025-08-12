import java.util.Scanner;
class Digits
{
    
    public void DisplayEven(int iNo)
    {   
        
        // int iCnt = 0;
        if(iNo <0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {   
            
            iNo = iNo / 10;
            if(((iNo % 10) % 2) ==0)
            { 
                System.out.println(iNo % 10);
                    // iCnt++;
            }
           
        }
        // return iCnt;
    }
}
class program71
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