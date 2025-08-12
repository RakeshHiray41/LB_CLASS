import java.util.*;

class program528
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        HashMap<String,Integer> hobj = new HashMap<>();

        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String tokens[] = str.split(" ");

        for(String s : tokens)
        {
            if(hobj.containsKey(s))
            {   
                hobj.put(str,hobj.get(s)+1);
            }
            else
            {
                hobj.put(s,1);
            }
        }
        String newstr  = "";
        for(String s : hobj.keySet())
        {
            newstr = newstr + s;
            newstr = newstr + " ";        
        }

        System.out.println(newstr.trim());
    }
}