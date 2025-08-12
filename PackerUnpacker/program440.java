import java.util.*;
import java.io.*;

class program440
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

                byte Arr[] = new byte[1024];

                int iRet = 0;
                
                System.out.println("Data From file is : ");
                
                while((iRet = fibj.read(Arr)) != -1)
                {
                    String str = new String(Arr);
                    System.out.print(str);
                }
                
            }
            else
            {
                System.out.println("File Not present in current directory");
                return;
            }
            
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}
          
    }
}