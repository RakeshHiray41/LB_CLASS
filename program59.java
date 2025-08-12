import java.util.Scanner;
class Number
{
    public boolean CheckEven(int iNo)
    {
        boolean bRet = false;
        if((iNo % 2)==0)
        {
            bRet = true;
        }
        else
        {
            bRet = false;
        }
        return bRet;
    }
}
class program59
{
    public static void main(String A[])
    {
        boolean bRet = false;
        int iValue = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter  Number : ");

        iValue  = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.CheckEven(iValue);

        if(bRet == true)
        {
            System.out.println(iValue + " is even. ");
        }
        else if(bRet == false)
        {
            System.out.println(iValue +" is odd. ");
        }
    }
}