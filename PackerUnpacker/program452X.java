import java.util.*;
import java.io.*;

class program452X
{
    public static void main(String a[])
    {
       try
       {
           Scanner sobj = new Scanner(System.in);

           System.out.println("Enter the Name of file that you want to unpack : ");
           String PackName = sobj.nextLine();
     
           File fobj = new File(PackName);

           if((fobj.exists()))
           {    
                byte Buffer[] = new byte[100];
                int iRet = 0;

                FileInputStream fiobj = new FileInputStream(fobj);

                while((iRet = fiobj.read(Buffer))!= -1)
                {
                    String str = new String(Buffer);

                    str = str.trim();

                    String Arr[] = str.split(" ");

                    File fobj1 = new File(Arr[0]);

                    fobj1.createNewFile();
                }
                
           }      
           else
           {
                System.out.println("There is no such directory");
           }
           
        }
       catch(Exception eobj)
       {}
            
    }
}



LB.txt 13       Jay Ganesh...   Marvellous.txt 13       Jay Ganesh...   PPA.txt 44      aaaaaaaaaabbbbbbbbbbccccccccccddddddddddeeee    PPPX.txt 44     aaaaaaaaaabbbbbbbbbbccc