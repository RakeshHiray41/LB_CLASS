import java.util.*;
import java.time.LocalDate;

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
public class program550
{
    public static void main(String A[])
    {
      LocalDate lobj =  LocalDate.now();

      System.out.println(lobj);

    }
}