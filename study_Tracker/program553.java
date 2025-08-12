import java.util.*;
import java.time.LocalDate;

//DONE
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

  public LocalDate getDate()
  {
    return Date;
  }

  public String getSubjcet()
  {

    return Subject;
  }

  public double getDuration()
  {
    return Duration;

  }

  public String getDescrption()
  {
    return Descrption;
  }
}

class StudyTracker
{

  //DataStructure to hold the data aobut study

  private ArrayList<studyLog> database = new ArrayList<studyLog>();

  public void InsertLog()
  {
    Scanner  scannerObj = new Scanner(System.in);

    System.out.println("--------------------------------------------------------------------------------------------");
    System.out.println("----------------Please Enter the valid details of your study--------------------------------");
    System.out.println("--------------------------------------------------------------------------------------------");

    LocalDate dateObj = LocalDate.now();
    System.out.println("Please provide the name of subject like C/C++/Java/OS/DS");

    String sub = scannerObj.nextLine();

    System.out.println("Enter the time period if your study in hours");
    double dur = scannerObj.nextDouble();
    scannerObj.nextLine();

    System.out.println("Please provide the description about the study for future referecne");
    String desc = scannerObj.nextLine();

    studyLog studyObj = new studyLog(dateObj,sub,dur,desc);

    database.add(studyObj);
    System.out.println("Study Log gets stored succesfully");
    System.out.println("--------------------------------------------------------------------------------------------");

  }
}

public class program553 //StudyTrackerStarter
{
  public static void main(String A[]) 
  {
      StudyTracker stobj = new StudyTracker();
      stobj.InsertLog();

  }
}