import java.util.*;
import java.io.*;

class program466
{
    public static void main(String a[])
    {
       try
       {    
            System.out.println("----------------------------------------------------");
            System.out.println("------------Marvellous Packer Unpacker--------------");
            System.out.println("----------------------------------------------------");
            System.out.println("-----------------Packing Activity-------------------");
            System.out.println("----------------------------------------------------");

            int i = 0,j = 0,iRet = 0,iCountFile = 0;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the Name of Directory that you want to pack : ");
            String DirName = sobj.nextLine();

            System.out.println("Enter the Name of Directory that you want to create for Packing : ");
            String PackName = sobj.nextLine();          

           File fobj = new File(DirName);

            //check the existance of directory
            if((fobj.exists()) && (fobj.isDirectory()))
            {
                System.out.println(DirName+" is Successfully opened");

                File packobj = new File(PackName);

                //Create a packed file
                boolean bRet = packobj.createNewFile();

                if(bRet == false)
                {
                    System.out.println("Unacle to create pack file");
                    return ;
                }

                System.out.println("Packed file get successfully created with name : "+PackName);

                //Retrive all file from directory
                File Arr[] = fobj.listFiles();

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

                    //open file from directory for reading 
                    FileInputStream fiobj = new FileInputStream(Arr[i]);
                    
                    // write content into packed file
                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        foobj.write(Buffer,0,iRet);
                        System.out.println("File Scanned name : "+Arr[i].getName());
                        System.out.println("File size read is : "+iRet);
                    }
                    fiobj.close();
                    iCountFile++;
                    
                }  
                System.out.println("Packing Activity Done"); 

                System.out.println("----------------------------------------------------");
                System.out.println("-----------------Statical report--------------------");
                System.out.println("----------------------------------------------------");
                
                //To be add
                System.out.println("Total File Packed : "+iCountFile);

                System.out.println("----------------------------------------------------");
                System.out.println("---------Thank you for using our application--------");
                System.out.println("----------------------------------------------------");
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




// Add = extension check