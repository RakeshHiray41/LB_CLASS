/* input  4 4

   A    B   C   D
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j =0;
        char ch = 'A';
        for (i = 1;i <= iRow ;i++)
        {
           
            for(j = 1; j <=iCol ; j++)
            {
              System.out.print(ch+"\t");
              ch++;  
            }
            System.out.println();
        }
    }
}
class program96
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
        pobj.Display(iValue1,iValue2,ch);
    }
}