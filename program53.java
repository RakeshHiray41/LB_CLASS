import java.util.Scanner;

class program53
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Frst No :");
        int iNo1 = sobj.nextInt();
        
        System.out.println("Enter Second No :");
        int iNo2 = sobj.nextInt();

        int iAns = iNo1 + iNo2;
        System.out.println("Addition is: "+iAns);
    }
}