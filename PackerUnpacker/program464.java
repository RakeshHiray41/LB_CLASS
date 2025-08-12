import java.util.*;
import java.io.*;

class program464
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

                int i = 0,j = 0,iRet = 0;
                // Packed file object
                FileOutputStream foobj = new FileOutputStream(packobj);
                
                //Buffer for read and write activity
                byte Buffer[] = new byte[1024];
                String header = null;
                
                // Directory traversal
                for(i = 0; i < Arr.length; i++)
                {
                    header = Arr[i].getName()+" "+Arr[i].length();
                    
                    //Loop to form 100 byte header
                    for(j = header.length() ; j < 100 ; j++)
                    {
                        header += " ";
                    }
                    //write header into packed file
                    foobj.write(header.getBytes());

                    
                    
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