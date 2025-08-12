import java.util.*;
import java.io.*;
import MarvellousPackerUnpacker.MarvellousPacker;

class program468
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

            MarvellousPacker mobj = new MarvellousPacker(PackName,DirName);
            mobj.PackingActivity();

        }   
        catch(Exception eobj)
        {}
            
    }//End of main
}//End of program467 class

