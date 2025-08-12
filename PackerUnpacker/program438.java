import java.util.*;
import java.io.*;

class program438
{
    public static void main(String a[])
    {
        try
        {   Scanner sobj = new Scanner(System.in);

            System.out.println("Enter File name to open : ");
            String Fname = sobj.nextLine();

            File fobj = new File(Fname);

            
            if(fobj.exists())
            {
                FileInputStream fibj = new FileInputStream(fobj);

                byte Arr[] = new byte[10];

                fibj.read(Arr);
                
                String str = new String(Arr);
                System.out.println("Data From File is : "+str);

                
            }
            else
            {
                System.out.println("File Not present in current directory");
                return;
            }
            
        }
        catch(IOException iobj)
        {

        }
        catch(Exception eobj)
        {}
          
    }
}