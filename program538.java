import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int a, int b)
    {
        this.Arr = new int[a][b];
    }

    public void Accept()
    {
        System.out.println("Please accept the elements of matrix :");

        Scanner sobj = new Scanner(System.in);
        int i = 0 , j = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are :");

        
        int i = 0 , j = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int CountEven()
    {
        int i = 0 , j = 0,iCountEven = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2) == 0 )
                {
                    iCountEven++;
                }
            }
            System.out.println();
        }
        return iCountEven;
    }

    public int Summation()
    {
        int i = 0 , j = 0,iSum = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                
                iSum = iSum + Arr[i][j];
            }
            System.out.println();
        }
        return iSum;
    }

}

class program537

{
    public static void main(String a[])
    {
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        
        mobj.Display();

        iRet = mobj.CountEven();

        System.out.println("Number of Even number are : "+iRet);

        iRet = mobj.Summation();

        System.out.println("Summation of number is : "+iRet);

    }
}