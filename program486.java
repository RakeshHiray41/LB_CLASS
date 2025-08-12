import java.util.*;

class StringX
{
    // private String Str;

    // public StringX(String a)
    // {
    //     this.str = a;
    // }

    public static void Trim(String str)
    {
        int i = 0;
        int iStart = 0,iEnd = 0;
        
    
        char Arr[] = str.toCharArray();// _ _ _Jay_ _Ganesh_ _ _

        if(Arr[0] == ' ')
        {
            System.out.println("Inside first if");
            while((Arr[i] == ' ') && (i < Arr.length))
            {
                i++;
            }
        }
        iStart = i;

        i = 0;
        i = Arr.length - 1;

        if(Arr[Arr.length - 1] == ' ')
        {
            System.out.println("Inside second if");
            while(Arr[i] == ' ')
            {
                i--;
            }
        }
        iEnd = i;

        System.out.println("iStart : "+iStart);
        System.out.println("End : "+iEnd);
        
        for(i = iStart ; i <= iEnd ; i++)
        {
            System.out.print(Arr[i]);
        }

    }
}

class program486
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();


       StringX.Trim(str);


    }
}