import java.io.*;
import MarvellousPackerUnpacker.MarvellousPacker;
import MarvellousPackerUnpacker.MarvellousUnpacker;

class Menu
{
    public static void main(String a[])
    {
        int iChoice = 0;
        String PackName = null;

        System.out.println("-----------------------------------------------------------");
        System.out.println("----------------Marvellous PackerUnpacker------------------");
        System.out.println("-----------------------------------------------------------");

        while(true)
        {
            System.out.println("-----------------------------------------------------------");
            System.out.println("-----------------Please select your option-----------------");
            System.out.println("-----------------------------------------------------------");

            System.out.println("0.Exit");
            System.out.println("1.For Packing Activity");
            System.out.println("2.For Unpacking Activity");
            System.out.println("-----------------------------------------------------------");

            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            try
            {
                iChoice = Integer.parseInt(br.readLine());
            
            
                if(iChoice == 1)
                {
                    System.out.println("Enter the Name of Directory that you want to pack : ");
                    String DirName = br.readLine();

                    System.out.println("Enter the Name of file that you want to create for Packing : ");
                    PackName = br.readLine(); 

                    MarvellousPacker mpobj = new MarvellousPacker(PackName,DirName);
                    mpobj.PackingActivity();
                }
                else if(iChoice == 2)
                {
                    System.out.println("Enter the Name of file which contain packed data : ");
                    PackName = br.readLine();

                    MarvellousUnpacker muobj =  new MarvellousUnpacker(PackName);
                    muobj.UnpackingActivity();
                }
                else if (iChoice == 0)
                {
                    System.out.println("-----------------------------------------------------------");
                    System.out.println("-------------Thank you for using our application-----------");
                    System.out.println("-----------------------------------------------------------");
                    break;
                }
                else
                {
                    System.out.println("Invalid choice .Plz select as in menu");
                }
            }
            catch(Exception eobj)
            {}
        }
    }
}