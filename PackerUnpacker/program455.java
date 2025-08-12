import java.util.*;
import java.io.*;

class program455
{
    public static void main(String a[])
    {
       try
        {
           String Header = "PPA.txt 30";

           System.out.println("Header size : "+Header.length());
           int i = 0;

           for(i = Header.length() ; i < 100;i++)
           {
                Header = Header + " ";
           }
           System.out.println("Header size after update : "+Header.length());

           System.out.println("Upadated Header : "+Header);

           Header = Header.trim();

            System.out.println("Header size after trim : "+Header.length());

           System.out.println("Upadated Header after trim : "+Header);
        }
       catch(Exception eobj)
       {}
            
    }
}