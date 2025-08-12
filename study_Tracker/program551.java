import java.util.*;
import java.time.LocalDate;

class studyLog
{
  public LocalDate Date;
  public String Subject;
  public double Duration;
  public String Descrption;
  
  public studyLog(LocalDate A,String B, double C, String D)
  {
    this.Date = A;
    this.Subject = B;
    this.Duration = C;
    this.Descrption = D;
    

  }
  @Override
  public String toString()
  {
    return Date + " | "+ Subject + " | " + Duration + " | "+ Descrption;
  }
}
public class program551
{
    public static void main(String A[])
    {

      studyLog sobj1= new studyLog(LocalDate.now(),"C", 2.5, "Pointer and Array");
      studyLog sobj2 = new studyLog(LocalDate.now(),"C++", 2.0, "Polymorphism ");
      studyLog sobj3 = new studyLog(LocalDate.now(),"java", 2.5, "Inheritance");
      studyLog sobj4= new studyLog(LocalDate.now(),"C", 2.5, "Pointer and Array");
      studyLog sobj5= new studyLog(LocalDate.now(),"C", 1.0, "Pointer and Array");

      ArrayList<studyLog> aobj = new ArrayList<>();

      aobj.add(sobj1);
      aobj.add(sobj2);
      aobj.add(sobj3);
      aobj.add(sobj4);
      aobj.add(sobj5);


      for(studyLog sobj : aobj)
      {
        System.out.println(sobj);
      }

    }
}