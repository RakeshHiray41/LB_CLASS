import java.util.*;
import java.io.*;

class program434
{
    public static void main(String a[])
    {
        try
        {   Scanner sobj = new Scanner(System.in);

            System.out.println("Enter File name to create : ");
            String Fname = sobj.nextLine();

            File fobj = new File(Fname);

            
            if(fobj.exists())
            {
                System.out.println("File Already exists");
            }
            else
            {
                fobj.createNewFile(); 
                System.out.println("File Successfully Created");
            }
            
        }
        catch(IOException iobj)
        {

        }
        catch(Exception eobj)
        {}
          
    }
}