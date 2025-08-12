import java.util.*;

class program494
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        int Count[] = {0,0,0};

        char Arr[] = str.toCharArray();

        for(int i = 0 ; i < Arr.length; i++)
        {
            if(Arr[i] == 'a')
            {
                Count[Arr[i] -'a']++;
            }
            else if(Arr[i] == 'b')
            {
                Count[Arr[i] -'a']++;
            }
            else if(Arr[i] == 'c')
            {
                Count[Arr[i] -'a']++;
            }
        }

        System.out.println("Frquency of a : "+Count[0]);
        System.out.println("Frquency of b : "+Count[1]);
        System.out.println("Frquency of c : "+Count[2]);

    }
}