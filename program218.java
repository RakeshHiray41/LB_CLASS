import java.util.Scanner;

class NNumberX
{
    public int Arr[];

    public NNumberX(int iSize)
    {
        Arr = new int[iSize];
    }
    public int CountEven()
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
class program218
{
    public static void main(String A[] )
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of element : ");
        int iSize = sobj.nextInt();

        NNumberX nobj = new NNumberX(iSize);
        

        System.out.println("Enter the elements : ");
        int iCnt = 0;

        for(iCnt = 0; iCnt < nobj.Arr.length;iCnt++)
        {
            nobj.Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements array are : ");

        for(iCnt = 0; iCnt < nobj.Arr.length;iCnt++)
        {
            System.out.println(nobj.Arr[iCnt]);
        }

        
        
        int iRet = 0; 
        
        iRet = nobj.CountEven();
        System.out.println("Number of Even number : "+iRet);
        
        
        sobj = null; // impressive for interview

    }
}

