
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j =0;
        char ch1= '\0';
        char ch2= '\0';
        for (i = 1,ch1 ='A',ch2 = 'a';i <= iRow ;i++, ch1++,ch2++)
        {
            
            for(j = 1; j <=iCol ; j++)
            {
             if( (i % 2)==0)
                {
                     System.out.print(ch1+"\t");
                } 
                else
                {
                     System.out.print(ch2+"\t");
                }               
            }
           
            System.out.println();
        }
    }
}
class program101
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