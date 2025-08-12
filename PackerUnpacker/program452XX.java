import java.util.*;
import java.io.*;

class program452XX
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
                byte Header[] = new byte[100];
                int iRet= 0;

                for(i = 0; i < Arr.length; i++)
                {
                    System.out.println("File Name is : "+Arr[i].getName()+"  File size is : "+Arr[i].length());
                    String str = "\t"+Arr[i].getName()+" "+Arr[i].length();
                    Header = str.getBytes();
                    

                    foobj.write(Header);

                    FileInputStream fiobj = new FileInputStream(Arr[i]);

                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        foobj.write(Buffer,0,iRet);
                    }
                    fiobj.close();
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