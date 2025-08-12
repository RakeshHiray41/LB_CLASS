import java.util.*;

class program542 
{
    public static void main(String A[])
    {
      ArrayList<Double> aobj = new ArrayList<Double>();

      aobj.add(10.5);
      aobj.add(20.5);
      aobj.add(30.5);
      aobj.add(40.5);
      aobj.add(50.5);

      System.out.println(aobj);
      

      if(aobj.contains(20.5))
      {
        System.out.println("Element is present");
      }
      else
      {
        System.out.println("Element is not present");
      }
      aobj.remove(30.5);

      System.out.println(aobj);

      System.out.println("number of element are : "+aobj.size());

      for(double dvalue : aobj)
      {
        System.out.println(dvalue);
      }
    }
}