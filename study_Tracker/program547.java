import java.util.*;

class studyLog
{
  public String Subject;
  public double Duration;
  public String Descrption;

  public studyLog(String A, double B, String C)
  {
    this.Subject = A;
    this.Duration = B;
    this.Descrption = C;

  }
  @Override
  public String toString()
  {
    return Subject + " | " + Duration + " | "+ Descrption;
  }
}
public class program547
{
    public static void main(String A[])
    {
      studyLog sobj1= new studyLog("C", 2.5, "Pointer and Array");
      studyLog sobj2 = new studyLog("C++", 2.0, "Polymorphism ");
      studyLog sobj3 = new studyLog("java", 2.5, "Inheritance");
      studyLog sobj4= new studyLog("C", 2.5, "Pointer and Array");
      studyLog sobj5= new studyLog("C", 2.5, "Pointer and Array");

      ArrayList<studyLog> aobj = new ArrayList<>();

      aobj.add(sobj1);
      aobj.add(sobj2);
      aobj.add(sobj3);
      aobj.add(sobj4);
      aobj.add(sobj5);


      for(studyLog s : aobj)
      {
        System.out.println(s);
      }

    }
}