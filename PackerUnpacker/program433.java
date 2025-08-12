import java.util.*;
import java.io.*;

class program433
{
    public static void main(String a[])
    {
        try
        {
            File fobj = new File("PPA.txt");

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