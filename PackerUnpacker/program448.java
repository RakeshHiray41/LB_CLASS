import java.util.*;
import java.io.*;

class program448
{
    public static void main(String a[])
    {
       try
       {
           Scanner sobj = new Scanner(System.in);

           System.out.println("Enter the Name of Directory");
           String DirName = sobj.nextLine();

           File fobj = new File(DirName);

           if(fobj.exists())
           {
                System.out.println("Directory is present");
                File Arr[] = fobj.listFiles();

                System.out.println("Number of files in directory : "+Arr.length);
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