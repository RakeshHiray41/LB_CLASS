import java.util.Scanner;
class program32
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Your name: ");
        String name = sobj.nextLine();

        System.out.println("Enter your age: ");
        int Age = sobj.nextInt();

        System.out.println("ENter your Marks: ");
        float marks =sobj.nextFloat();
    
        System.out.println("Name: "+name);
        System.out.println("Age: "+Age);
        System.out.println("Marks: "+marks);
    
    }
}