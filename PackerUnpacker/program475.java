import java.util.*;
import java.io.*;

class program475
{
    public static void main(String a[])
    {
        try
        {             
            Scanner sobj = new Scanner(System.in);

            int FileSize = 0,iRet = 0,iCountFile = 0;
            String Header = null;
            File fobjnew = null;

            System.out.println("Enter the Name of file which contain packed data : ");
            String PackName = sobj.nextLine();          

            File fobj = new File(PackName);
            
            // if packed is not present
            if (!fobj.exists())
            {
                System.out.println("Unable to access Packed file");
                return;
            }
            System.out.println("Packed file gets successfully opend");

            FileInputStream fiobj = new FileInputStream(fobj);

            // Buffer to read header
            byte HeaderBuffer[] = new byte[100];

            //Scan the Packed File to Extract the files from it
            while((iRet = fiobj.read(HeaderBuffer,0,100)) != -1)
            {    

                // Convert  byte array to string
                Header = new String(HeaderBuffer);

                Header = Header.trim();

                // Tokenize the header into 2 parts
                String Tokens[] = Header.split(" ");

                fobjnew  = new File(Tokens[0]);

                // Create new file to extract
                fobjnew.createNewFile();           

                FileSize = Integer.parseInt(Tokens[1]);

                // Create new BUffer to store file data
                byte Buffer[] = new byte[FileSize];

                FileOutputStream foobj = new FileOutputStream(fobjnew);

                // read the data from packed file
                fiobj.read(Buffer,0,FileSize);

                // write the data in extracted file
                foobj.write(Buffer,0,FileSize);

                System.out.println("File Unpacked with name : "+Tokens[0] + " having size " + FileSize);
                
                iCountFile++;

                foobj.close();

            }//End of while

            System.out.println("Total Number of Files Unpack : "+iCountFile);
            fiobj.close();
        }   
        catch(Exception eobj)
        {}
            
    }//End of main
}//End of program467 class

