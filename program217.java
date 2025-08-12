import java.util.Scanner;
class NNumberX
{
    public int CountEven(int Arr[])
    {
        int iCount = 0, iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt]%2)==0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class program217
{
    public static void main(String A[] )
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of element : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements array are : ");

        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        NNumberX nobj = new NNumberX();
        
        int iRet = 0; 
        
        iRet = nobj.CountEven(Arr);
        System.out.println("Number of Even number : "+iRet);
        
        Arr = null;
        sobj = null; // impressive for interview

    }
}

