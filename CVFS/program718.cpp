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

#define START 0
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
//
/////////////////////////////////////////////////////////////////
struct  BootBlock
{
  char Information[100];
};


//////////////////////////////////////////////////////////////
//
// Structure Name : SuperBlock 
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
//
/////////////////////////////////////////////////////////////////
struct UAREA
{
  char ProcessName[50];
  PFILETABLE UFDT[MAXINODE];
};

///////////////////////////////////////////////////////////////
//
// Global variable declarations
//
/////////////////////////////////////////////////////////////////
BootBlock bootobj;
SuperBlock superobj;
PINODE head =  NULL;
UAREA  uareaobj;

///////////////////////////////////////////////////////////////
//
//  function : InitialiseUAREA
//
/////////////////////////////////////////////////////////////////
void InitialiseUAREA()
{
  strcpy(uareaobj.ProcessName,"myexe");
  int i = 0;
  while (i < MAXINODE)
  {
    uareaobj.UFDT[i] = NULL;
    i++;
  }
  cout<<"Marvellous CVSF : UFDT initialise successfully\n";
}

///////////////////////////////////////////////////////////////
//
//  function : InitialiseSuperBlock
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
//  function : CreateDILB
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
    newn -> FileSize = 0;
    newn -> ActualFileSize = 0;
    newn -> Permission = 0;
    newn -> LinkCount = 0;
    newn -> FileType = 0;
    newn -> Buffer = NULL;
    newn -> next = NULL;

    if(temp == NULL)
    {
      head = newn;
      temp = head;
    }
    else
    {
      temp -> next = newn; // fixed missing assignment
      temp = temp -> next;
    }
    i++;
  }
  cout<<"Marvellous CVSF : DILB created successfully\n";
}

///////////////////////////////////////////////////////////////
//
//  function : StartAuxilaryDataInitialise
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
//  function : DisplayHelp
//
/////////////////////////////////////////////////////////////////
void DisplayHelp()
{
  printf("---------------------------------------------------------------------------------------\n");
  printf("----------------- Command Manual of Marvellous CVSF ----------------------------------\n");
  printf("---------------------------------------------------------------------------------------\n");
  printf("exit : It is used to terminate the shell of Marvellous CVSF \n");
  printf("clear : It is used to clear the console of Marvellous CVSF \n");
  printf("---------------------------------------------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////
//
//  function : ManPage
//
/////////////////////////////////////////////////////////////////
void ManPage(char *name)
{
  if (strcmp(name,"creat")== 0)
  {
    printf("Description : this command is used to create new regular file on our file system\n ");
    printf("Usages : creat File_Name permissions\n");
    printf("permissions : \n1 : read \n 2 : write \n 3 : Read + Write\n");
  }
  else if (strcmp(name,"exit")== 0)
  {
    printf("Description : this command is used to terminate the Marvellous CVFS\n ");
    printf("Usages : exit\n");
  }
  else
  {
    printf("No manual entry for %s\n",name);
  }
}

///////////////////////////////////////////////////////////////
//
//  function : IsFileExists
//
/////////////////////////////////////////////////////////////////
bool IsFileExists(char *name)
{
  PINODE temp = head;
  bool bFlag = false;

  while (temp != NULL)
  {
    if((strcmp(name , temp->FileName) == 0) && (temp -> FileType == REGULARFILE))
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
//  function : CreateFile
//
/////////////////////////////////////////////////////////////////
int CreateFile(char *name, int permission)
{
  PINODE temp = head;
  int i = 0;

  if(name == NULL)
  {
    return ERR_INVALID_PARAMETER;
  }
  if(permission < 1 || permission > 3)
  {
    return ERR_INVALID_PARAMETER;
  }
  if(superobj.FreeInodes == 0)
  {
    return ERR_NO_INODES;
  }
  if(IsFileExists(name) == true)
  {
    return ERR_FILE_ALREADY_EXIST;
  }

  while (temp != NULL)
  {
    if(temp -> FileType == 0)
    {
      break;
    }
    temp = temp -> next;
  }
  if(temp == NULL)
  {
    printf("not found");
    return -1;
  }

  for(i = 0 ; i < MAXINODE; i++) // fixed MAXNODE typo
  {
    if(uareaobj.UFDT[i] == NULL)
    {
      break;
    }
  }
  if( i == MAXINODE)
  {
    printf("Unable to create file as MAX OPENED FILE LIMIT REACHED");
  }

  uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

  uareaobj.UFDT[i] -> ReadOffSet = 0;
  uareaobj.UFDT[i] -> WriteOffSet = 0;
  uareaobj.UFDT[i] -> Count = 1; // fixed missing value
  uareaobj.UFDT[i] -> Mode = permission;

  uareaobj.UFDT[i] -> ptrinode = temp;

  strcpy(uareaobj.UFDT[i] -> ptrinode -> FileName,name);
  uareaobj.UFDT[i] -> ptrinode -> FileSize = MAXFILESIZE;
  uareaobj.UFDT[i] -> ptrinode -> ActualFileSize = 0;
  uareaobj.UFDT[i] -> ptrinode -> FileType = REGULARFILE;
  uareaobj.UFDT[i] -> ptrinode -> ReferenceCount = 1;
  uareaobj.UFDT[i] -> ptrinode -> LinkCount = 1;
  uareaobj.UFDT[i] -> ptrinode -> Permission = permission;

  uareaobj.UFDT[i] -> ptrinode -> Buffer = (char *) malloc(MAXFILESIZE); // fixed MAXSIZE undefined
  return i;
}

///////////////////////////////////////////////////////////////
//
//  Entry point
//
//////////////////////////////////////////////////////////////
int main()
{
  char str[80] = {'\0'};
  int iCount = 0;
  char Command[5][80];
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
      if(strcmp(Command[0],"exit") == 0)
      {
        printf("Thank you for using Marvellous CVFS\n");
        printf("Deallocating all resourse\n");
        break;
      }
      else if (strcmp(Command[0],"help") == 0)
      {
        DisplayHelp();
      }
      else if (strcmp(Command[0],"clear") == 0)
      {
        system("cls");
      }
    }
    else if(iCount == 2)
    {
      if (strcmp(Command[0],"man") == 0)
      {
        ManPage(Command[1]);
      }
    }
    else if(iCount == 3)
    {
      if(strcmp(Command[0],"creat") == 0)
      {
        iRet = CreateFile(Command[1], atoi(Command[2]));
        if(iRet == ERR_INVALID_PARAMETER)
        {
          printf("Error : Invalid parameters for the function\n");
          printf("Please check Man page for more details\n");
        }
        else if(iRet == ERR_NO_INODES)
        {
          printf("Error : Unable to create file as no free inodes\n");
        }
        else if(iRet == ERR_FILE_ALREADY_EXIST)
        {
          printf("Unable to create file as file is already exist\n");
        }
        else
        {
          printf("File created successfully with FD : %d\n", iRet);
        }
      }
    }
    else
    {
      printf("Command not found ...\n");
      printf("Please refer Help option or  use man command\n");
    } //if of invalid command part


  } //End of while(Custom shell)

  return 0;
} //End of main