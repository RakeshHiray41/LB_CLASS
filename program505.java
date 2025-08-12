import java.util.*;


class program505
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
        
        System.out.println("Unique Charater are : ");
        for(char ch : hobj.keySet())
        {
            System.out.println(ch);
        }
    }
}