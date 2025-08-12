import java.util.*;
import java.io.*;

class program449
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

                int i = 0;

                for(i = 0; i < Arr.length; i++)
                {
                    System.out.println("File Name is : "+Arr[i].getName()+"  File size is : "+Arr[i].length());
                    
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