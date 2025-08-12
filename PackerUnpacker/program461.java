import java.util.*;
import java.io.*;

class program461
{
    public static void main(String a[])
    {
       try
       {
           Scanner sobj = new Scanner(System.in);

           System.out.println("Enter the Name of Directory that you want to pack : ");
           String DirName = sobj.nextLine();

           System.out.println("Enter the Name of Directory that you want to create for Packing : ");
           String PackName = sobj.nextLine();

            File packobj = new File(PackName);

            boolean bRet = packobj.createNewFile();

            if(bRet == false)
            {
                System.out.println("Unacle to create pack file");
                return ;
            }

           File fobj = new File(DirName);


           if((fobj.exists()) && (fobj.isDirectory()))
           {
                System.out.println("Directory is present");
                File Arr[] = fobj.listFiles();

                System.out.println("Number of files in directory : "+Arr.length);

                int i = 0;
                
                FileOutputStream foobj = new FileOutputStream(packobj);
                
                byte Buffer[] = new byte[1024];
                int iRet= 0;
                String header = null;
                for(i = 0; i < Arr.length; i++)
                {
                    header = Arr[i].getName()+" "+Arr[i].length();

                    System.out.println(header);
                }  
                System.out.println("Packing Activity Done"); 
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