import java.util.*;
import java.io.*;
import MarvellousPackerUnpacker.MarvellousUnpacker;

class program478
{
    public static void main(String a[])
    {
        try
        {             
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the Name of file which contain packed data : ");
            String PackName = sobj.nextLine();          

            MarvellousUnpacker mobj = new MarvellousUnpacker(PackName);

            mobj.UnpackingActivity();
            

        }   
        catch(Exception eobj)
        {}
            
    }//End of main
}//End of program467 class

