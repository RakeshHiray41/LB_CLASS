import java.util.*;
import java.time.LocalDate;
import java.io.*;

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

  public void DisplayLog()
  {
    System.out.println("--------------------------------------------------------------------------------------------");

    if(database.isEmpty())
    {
      System.out.println("Nothing to display as database is empty");
      System.out.println("--------------------------------------------------------------------------------------------");
      return;
    }
    System.out.println("--------------------------------------------------------------------------------------------");
    System.out.println("---------------------Log Report form Marvellous Study Tracker-------------------------------");
    System.out.println("--------------------------------------------------------------------------------------------");

    for(studyLog sobj : database)
    {
      System.out.println(sobj);
    }
     System.out.println("--------------------------------------------------------------------------------------------");
  }

  public void ExportCSV()
  {
    if(database.isEmpty())
    {
      System.out.println("--------------------------------------------------------------------------------------------");
      System.out.println("Nothing to Export as database is empty");
      System.out.println("--------------------------------------------------------------------------------------------");
      return;
    }

    String fileName = "MarvellousStudy.csv";

    try(FileWriter fwobj = new FileWriter(fileName))
    {
      // Write CSV file Header
      fwobj.write("Date Subject, Duraction, Description\n");

      // Travel database
      for(studyLog sobj : database)
      {
        // Write each recored in CSV
        fwobj.write(sobj.getDate() + ","+
                    sobj.getSubjcet() .replace(",","")+ ","+
                    sobj.getDuration() + ","+
                    sobj.getDescrption().replace(",","") +"\n");
      }
      System.out.println("Log Create Successfully");
    }
    catch(Exception eobj)
    {
      System.out.println("Exception occured while creating the CSV");
       System.out.println("Report this issue to Mavellous");
    }
  }

  public void SummaryByDate()
  {
    System.out.println("--------------------------------------------------------------------------------------------");

    if(database.isEmpty())
    {
      System.out.println("Nothing to display as database is empty");
      System.out.println("--------------------------------------------------------------------------------------------");
      return;
    }
    System.out.println("--------------------------------------------------------------------------------------------");
    System.out.println("------------------ Summary by date form Marvellous study tracker ---------------------------");
    System.out.println("--------------------------------------------------------------------------------------------");

    TreeMap<LocalDate ,Double> tobj = new TreeMap<>();

    LocalDate lobj = null;
    double d , old;
    for(studyLog sobj : database)
    {
      lobj = sobj.getDate();
      d = sobj.getDuration();
      if(tobj.containsKey(lobj))
      {
        old = tobj.get(lobj);
        tobj.put(lobj, d+old);
      }
      else
      {
        tobj.put(lobj,d);
      }
    }

    // Display the details as per date

    for(LocalDate ldobj : tobj.keySet())
    {
      System.out.println("Date : "+ldobj+" Total Study "+tobj.get(ldobj));
    }
     System.out.println("--------------------------------------------------------------------------------------------");
  }

}

public class program557 //StudyTrackerStarter
{
  public static void main(String A[]) 
  {
      StudyTracker stobj = new StudyTracker();
      Scanner  scannerObj = new Scanner(System.in);
     
      System.out.println("--------------------------------------------------------------------------------------------");
      System.out.println("-------------------Welcome to Marvellous Study tracker Application--------------------------");
      int iChoice = 0;
      do
      {
        System.out.println("Please select thr Appropriate option");
        System.out.println("1 : Insert new study log into Database");
        System.out.println("2 : View All Study Logs");
        System.out.println("3 : Summary of Study Log by Date");
        System.out.println("4 : Summary of Study Log by Subject");
        System.out.println("5 : Export Study Log  to CSV File");
        System.out.println("6 : Exit the Application");

        iChoice = scannerObj.nextInt();

        switch(iChoice)
        {
          case 1 :
                  stobj.InsertLog();
                    break;
        
          case 2 :

                  stobj.DisplayLog();
                    break;
      
          case 3 :
                stobj.SummaryByDate();
                    break;
      
        case 4 :

                    break;
        
        case 5 :
                  stobj.ExportCSV();
                    break;

        case 6 :
                    System.out.println("Thank you for using Marvellous study log Application");
                    break;
          
        default:
        System.out.println();


        }
      }while(true);
  }
}