
//////////////////////////////////////////////////////////////
//
//  Header Files
// 
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
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
//  Entry point function of project (main)
//
//////////////////////////////////////////////////////////////

int main()
{
  char str[80] = {'\0'};
 int iCount = 0;
 char Command[5] [80];

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

    printf("value of iCount is : %d\n",iCount);
    if(iCount == 1)
    {
      if(strcmp(Command[0],"exit") == 0)
      {
        printf("Thank you for using Marvellous CVFS\n");
        printf("Deallocating all resourse\n");
        break;
      }
    } //End of if iCount == 1
    else if(iCount == 2)
    {

    } //End of if iCount == 2
    else if(iCount == 3)
    {
      
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



  