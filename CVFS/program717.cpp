
//////////////////////////////////////////////////////////////
//
//  Header Files
// 
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////
//
//  User Define Macros
// 
//////////////////////////////////////////////////////////////

#define MAXFILESIZE 100

#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define REGULARFILE 1
#define SPECIALFILE 2

#define STRAT 0
#define CURRENT 1
#define END 2

//////////////////////////////////////////////////////////////
//
//  User Define Macros for error handling
// 
//////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER  -1
#define ERR_NO_INODES  -2
#define ERR_FILE_ALREADY_EXIST -3


//////////////////////////////////////////////////////////////
//
// Structure Name : BootBlock 
// Description :    Holds informtion to boot the operationg system
//
/////////////////////////////////////////////////////////////////
struct  BootBlock
{
  char Information[100];
};


//////////////////////////////////////////////////////////////
//
// Structure Name : SuperBlock 
// Description :    Holds informtion about the file system
//
/////////////////////////////////////////////////////////////////
struct SuperBlock
{
   int TotalInodes;
   int FreeInodes;
};

//////////////////////////////////////////////////////////////
//
// Structure Name : Inode 
// Description :    Holds informtion about the file 
//
/////////////////////////////////////////////////////////////////
 typedef struct Inode
{
  char FileName[50];
  int InodeNumber;
  int FileSize;
  int ActualFileSize;
  int ReferenceCount;
  int Permission;
  int LinkCount;
  int FileType;
  char *Buffer;
  struct Inode *next;
}INODE , *PINODE , **PPINODE;


//////////////////////////////////////////////////////////////
//
// Structure Name : FileTable 
// Description :    Holds informtion about the opened file 
//
/////////////////////////////////////////////////////////////////

typedef struct FileTable
{
  int ReadOffSet;
  int WriteOffSet;
  int Count;
  int Mode;
  PINODE ptrinode;
} FILETABLE, *PFILETABLE;

//////////////////////////////////////////////////////////////
//
// Structure Name : UAREA 
// Description :    Holds informtion about the process 
//
/////////////////////////////////////////////////////////////////

struct UAREA
{
  char ProcessName[50];
  PFILETABLE UFDT[MAXINODE];

};

///////////////////////////////////////////////////////////////
//
// Globol variable of objects used in the project
//
/////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
PINODE head =  NULL;
UAREA  uareaboj;

///////////////////////////////////////////////////////////////
//
//
//  function name : InitialiseUAREA
//  Description   : it is used to intialise the contents of super block
//  Author        : Rakesh Sudhakar Hiray
//  date          : 10/08/2025
//
/////////////////////////////////////////////////////////////////
void InitialiseUAREA()
{
  strcpy(uareaboj.ProcessName,"myexe");
  int i = 0;
  while (i < MAXINODE)
  {
    uareaboj.UFDT[i] = NULL;
    i++;
  }
   cout<<"Marvellous CVSF : UFDT initialise successfully\n";

}

///////////////////////////////////////////////////////////////
//
// 
//  function name : InitialiseSuperBlock
//  Description   : it is used to intialise the contents of super block
//  Author        : Rakesh Sudhakar Hiray
//  date          : 10/08/2025
//
/////////////////////////////////////////////////////////////////


void InitialiseSuperBlock()
{

  superobj.TotalInodes = MAXINODE;
  superobj.FreeInodes  =  MAXINODE;

  cout<<"Marvellous CVSF : super block initialise successfully\n";
}


///////////////////////////////////////////////////////////////
//
// 
//  function name : CreateDILB
//  Description   : it is used to create Linked list of Inodes
//  Author        : Rakesh Sudhakar Hiray
//  date          : 10/08/2025
//
/////////////////////////////////////////////////////////////////

void CreateDILB()
{
  int i = 1;
  PINODE newn = NULL;
  PINODE temp = head;

  while (i <= MAXINODE)
  {

    newn = new INODE;
    newn -> InodeNumber = i;
    newn -> FileSize =0;
    newn -> ActualFileSize = 0;
    newn -> Permission = 0;
    newn -> LinkCount = 0;
    newn -> Buffer = NULL;
    newn -> next = NULL;

    if(temp == NULL)
    {
      head = newn;
      temp = head;
    }
    else
    {
      temp -> next;
      temp = temp -> next;
    }
    i++;

  }
  cout<<"Marvellous CVSF : DILB created successfully\n";
  
}

///////////////////////////////////////////////////////////////
//
// 
//  function name : StartAuxilaryDataInitialisetion
//  Description   : it is used to intialise the Auxilary data
//  Author        : Rakesh Sudhakar Hiray
//  date          : 10/08/2025
//
/////////////////////////////////////////////////////////////////

void StartAuxilaryDataInitialise()
{
  
  strcpy(bootobj.Information ,"\nBoot Process of opertaing system done");
  cout<<bootobj.Information<<"\n";

  InitialiseSuperBlock();
  CreateDILB();
  InitialiseUAREA();

  cout<<"Marvellous CVSF : Auxilary data initialise successfully\n";
}

///////////////////////////////////////////////////////////////
//
// 
//  function name : DisplayHelp
//  Description   : it is used to Display the information about commands
//  Author        : Rakesh Sudhakar Hiray
//  date          : 11/08/2025
//
/////////////////////////////////////////////////////////////////

void DisplayHelp()
{
  printf("---------------------------------------------------------------------------------------\n");
  printf("----------------- Commnand Manual of Marvellous CVSF ----------------------------------\n");
  printf("---------------------------------------------------------------------------------------\n");
  printf("exit : It is used to terminate the shell of Marvellous CVSF \n");
  printf("clear : It is used to clear the console of Marvellous CVSF \n");
  printf("---------------------------------------------------------------------------------------\n");

   //Add more option here
}

///////////////////////////////////////////////////////////////
//
//  function name : ManPage
//  Description   : it is used to Display the manual page of commands
//  input         : it accepts the command name
//  output        : Display the manual details of the command
//  Author        : Rakesh Sudhakar Hiray
//  date          : 11/08/2025
//
/////////////////////////////////////////////////////////////////

void ManPage(
              char *name //
            )
{
  if (strcmp(name,"creat")== 0)
  {
    printf("Description : this command is used to create new regular file on our file system\n ");
    printf("Usages : creat File_Name permissions\n");
    printf("permissions : \n1 : read \n 2 : write \n 3 : Read + Write");
  }
  else if (strcmp(name,"exit")== 0)
  {
    printf("Description : this command is used to terminate the Marvellous CVFS\n ");
    printf("Usages : exit\n");
    
    //Add more option here
  }
  else
  {
    printf("No manual entry for %s\n",name);
  }
  
}

///////////////////////////////////////////////////////////////
//
//  function name : IsFileExists
//  Description   : it is used check whether the give file name is exist or not
//  input         : it accepts the file name 
//  output        : it return boolean vlaue (True it is present  False : if not present ) 
//  Author        : Rakesh Sudhakar Hiray
//  date          : 11/08/2025
//
/////////////////////////////////////////////////////////////////
 bool IsFileExists(
                    char *name   // name of file that we wnat to check
                  )
 {
     PINODE temp = head;
     bool bFlag = false;

     while (temp != NULL)
     {
        if((strcmp(name , temp -> FileType) == 0) && (temp -> FileType == REGULARFILE))
        {
          bFlag = true;
          break;
        }
        temp = temp -> next;
     }
     return bFlag;
 } 


///////////////////////////////////////////////////////////////
//
//  function name : CreateFile
//  Description   : it is used to create a new regular file
//  input         : it accepts the file name and permission
//  output        : return the file descriptor
//  Author        : Rakesh Sudhakar Hiray
//  date          : 11/08/2025
//
/////////////////////////////////////////////////////////////////

int CreateFile(
                  char *name      //name of file
                  int permission  //permission to create file
              )
{
  // filters
   // if file is missing
    if(name == NULL)
    {
      return ERR_INVALID_PARAMETER;
    }

    // if entered permission invalid
    if(permission < 1 || permission > 3)
    {
      return ERR_INVALID_PARAMETER;
    }

    // Check whether empty inode there or not
    if(superobj.FreeInodes == 0)
    {
      return ERR_NO_INODES;
    }

     // Check whether file is already exist or not
    if(IsFileExists(name) == true)
    {
      return ERR_FILE_ALREADY_EXIST;
    }

    

}



///////////////////////////////////////////////////////////////
//
//  Entry point function of project (main)
//
//////////////////////////////////////////////////////////////

int main()
{
  char str[80] = {'\0'};
 int iCount = 0;
 char Command[5] [80];
 int iRet = 0;
  StartAuxilaryDataInitialise();

  cout<<"---------------------------------------------------------------------------------------\n";
  cout<<"------------------------ Marvellous CVSF Started Successfully -------------------------\n";
  cout<<"---------------------------------------------------------------------------------------\n";

  while (1)
  {
    fflush(stdin);

    printf("\n Marvellous CVFS > ");
    fgets(str,sizeof(str),stdin);

    iCount = sscanf(str,"%s %s %s %s",Command[0] , Command[1] , Command[2] , Command[3]);

    if(iCount == 1)
    {

      //Marvellous CVFS > exit

      if(strcmp(Command[0],"exit") == 0)
      {
        printf("Thank you for using Marvellous CVFS\n");
        printf("Deallocating all resourse\n");
        break;
      }

      //Marvellous CVFS > help

      else if (strcmp(Command[0],"help") == 0)
      {
        DisplayHelp();
      }

      

      //Marvellous CVFS > clear
      else if (strcmp(Command[0],"clear") == 0)
      {
        system("cls");
      }
      
    } //End of if iCount == 1


    else if(iCount == 2)
    {

      //Marvellous CVFS > man creat
     if (strcmp(Command[0],"man") == 0)
      {
        ManPage(Command[1]);
      }

    } //End of if iCount == 2
    else if(iCount == 3)
    {

      //Marvellous CVFS > creat ganesh.txt
      if(strcmp(Command[0],"creat") == 0)
      {
        iRet = CreateFile(Command[1], atoi(Command[2]));
        if(iRet == ERR_INVALID_PARAMETER)
        {
          printf("Error : Invalid parameters for the function\n");
          printf("Please check Man page for more details\n");
        }
        else if(iRet ==ERR_NO_INODE )
        {
          printf("Error : Unble to c");
        }
        else if(iRet ==ERR_FILE_ALREADY_EXIST)
        {
          printf("Unable to create file as file is alredy exist");
        }
      }
    }//End of if iCount == 3
    else if(iCount == 4)
    {
      
    } //End of if iCount == 4
    else
    {
      printf("Command not found ...\n");
      printf("Please refer Help option or use man command\n");
    } //if of invalid command part


  } //End of while(Custom shell)

  return 0;
} //End of main
