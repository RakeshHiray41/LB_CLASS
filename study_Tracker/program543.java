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
  public void Display()
  {
      System.out.println(Subject + "|" + Duration + " | "+ Descrption);
  }
}
class program543
{
    public static void main(String A[])
    {
      studyLog sobj = new studyLog("C", 2.5, "Pointer and Array");
      studyLog sobj1 = new studyLog("C++", 2.0, "Polymorphism ");
      studyLog sobj3 = new studyLog("C", 2.5, "Inheritance");

      sobj.Display();
      sobj1.Display();
      sobj3.Display();

    }
}