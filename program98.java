
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j =0;
        char ch = '\0';
        for (i = 1;i <= iRow ;i++)
        {
           
            for(j = 1,ch = 'A'; j <=iCol ; j++,ch++)
            {
              System.out.print(ch+"\t");
                
            }
            System.out.println();
        }
    }
}
class program98
{
    public static void main(String A[])
    {   
        int iValue1 = 0,iValue2 = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        iValue1 = sobj.nextInt();
        
        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}