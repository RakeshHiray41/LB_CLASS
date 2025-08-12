
//////////////////////////////////////////////////////////////
//
//  User Define Micros
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
/////////////////////////////////////////////////////////////////

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

  cout<<"Marvellous CVSF : Auxilary data initialise successfully\n";
}



///////////////////////////////////////////////////////////////
//
//  Entry point function of project (main)
//
//////////////////////////////////////////////////////////////

int main()
{

   StartAuxilaryDataInitialise();

   
  return 0;
} 



  