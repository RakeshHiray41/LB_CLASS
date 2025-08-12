import java.util.Scanner;

class program54
{
    public static void main(String A[])
    {
        Scanner sobj = null;
        int iNo1 ,iNo2 , iAns ;
        
        sobj = new Scanner(System.in);

        System.out.println("Enter Frst No :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter Second No :");
         iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;
        System.out.println("Addition is: "+iAns);
    }
}