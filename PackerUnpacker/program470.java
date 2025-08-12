import java.util.*;
import java.io.*;

class program470
{
    public static void main(String a[])
    {
        try
        {             
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the Name of file which comtain packed data : ");
            String PackName = sobj.nextLine();          

            File fobj = new File(PackName);

            if (!fobj.exists())
            {
                System.out.println("Unable to access Packed file");
                return;
            }
            System.out.println("Packed file gets successfully opend");
            FileInputStream fiobj = new FileInputStream(fobj);

            // Buffer to read header
            byte HeaderBuffer[] = new byte[100];

            fiobj.read(HeaderBuffer,0,100);

            // Convert  byte array to string
            String Header = new String(HeaderBuffer);

            System.out.println(Header);


        }   
        catch(Exception eobj)
        {}
            
    }//End of main
}//End of program467 class

