import java.util.*;


class program507
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        str = str.replaceAll(" ","");

        HashMap <Character,Integer> hobj = new HashMap<>();

        int Frquency = 0;
        char Arr[] = str.toCharArray();

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch)) // Character is already there in hashmap
            {
                Frquency = hobj.get(ch);
                hobj.put(ch,Frquency+1);
            }
            else                // char occured first times
            {
                hobj.put(ch,1);
            }
        }
        
        int iMax = 0;
        char cMax = '\0';

        for(char ch : hobj.keySet())
        {
            if(iMax < hobj.get(ch))
            {
                iMax = hobj.get(ch);
                cMax = ch;
            }
        }
        System.out.println("Maximum occured character is : "+cMax+" with frequency : "+iMax);
    }
}