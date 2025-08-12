import java.util.Scanner;

class NNumberX
{
    private int Arr[];

    public NNumberX(int iSize)
    {
        System.out.println("Allocating resource");
        Arr = new int[iSize];   //resource allocation
    }

    public void Accept()  //knows as setter and getter 
    {
        System.out.println("Enter the elements : ");
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        for(iCnt = 0; iCnt < this.Arr.length;iCnt++)
        {
            this.Arr[iCnt] = sobj.nextInt();
        }
        sobj = null;
    }

    public void Display()
    {
        System.out.println("Elements array are : ");
        int iCnt = 0;

        for(iCnt = 0; iCnt < this.Arr.length;iCnt++)
        {
            System.out.println(this.Arr[iCnt]);
        }

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
    protected void finalize()
    {
        System.out.println("Deallocatiing resoure");
        Arr = null;
        
    }
}
class program223
{
    public static void main(String A[] )
    {
         int iRet = 0,iSize = 0; 
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of element : ");
        iSize = sobj.nextInt();

        NNumberX nobj = new NNumberX(iSize);
        nobj.Accept();
        nobj.Display();
       
        
        iRet = nobj.CountEven();
        System.out.println("Number of Even number : "+iRet);
        
        
        sobj = null; // impressive for interview
        nobj = null;
        System.gc();
        
    }
}

