#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
  int data;
  struct Node *lChild;
  struct Node * rChild;

};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Insert( PPNODE First, int no)
{
  PNODE newn = NULL;
  PNODE temp = NULL;
  newn = (PNODE)malloc(sizeof( NODE));

  newn -> data = no;
  newn -> lChild = NULL;
  newn -> rChild = NULL;

  if(*First == NULL)        //BST is empty
  {
    *First = newn;
  }
  else      //BST atleast one node
  {
    temp = *First;
    while(1)
    {
      if(no == temp -> data)
      {
        printf("Duplicate element : Unable to insert node \n");
        free(newn);
        break;
      }
      else if(no > temp -> data)      // rChild
      {
        if(temp -> rChild == NULL)
        {
          temp -> rChild = newn;
          break;
        }
        temp = temp -> rChild;
      }

      else  if(no < temp -> data) /// lChild
      {
          if(temp -> lChild == NULL)
        {
          temp -> lChild = newn;
          break;
        }
         temp = temp-> lChild;
      }
    }
  }
}

void Inorder( PNODE First)
{
  if(First != NULL)
  {
    if(First != NULL)
    {
      
      Inorder(First -> lChild);
      printf("%d\t",First -> data);
      Inorder (First -> lChild);
    }
  }
}
void Preorder( PNODE First)
{
  if(First != NULL)
  {
    if(First != NULL)
    {
       printf("%d\t",First -> data);
      Preorder(First -> lChild);
      Preorder (First -> lChild);
    }
  }
}

void Postorder( PNODE First)
{
  if(First != NULL)
  {
    if(First != NULL)
    {
       
      Postorder(First -> lChild);
      Postorder (First -> lChild);
      printf("%d\t",First -> data);
    }
  }
}

bool Search(PNODE First , int no)
{
  if(First == NULL)
  {
    bool bFlag = false;
    int timeComplexity = 0;
   while (First != NULL)
   {
     if( no ==  First -> data)
     {
        bFlag = true;
        break;
     }
     else if(no > First -> data)
     {
        First = First ->rChild;
     }
     else if(no < First -> data)
     {
        First = First -> lChild;
     }
     timeComplexity++;
   }
   printf("timeComplexity of Search is :%d",timeComplexity);
   return bFlag;
   
  }
}

int Count(PNODE First)
{
  static int iCount = 0;
   if(First != NULL)
  {
    if(First != NULL)
    {
       
      iCount++;
      Count(First -> rChild);
      Count (First -> lChild);
      
    }
    return iCount;
  }
}
int main()
{ 
  PNODE head = NULL;
  bool bRet = false;
  int iRet = 0;

    Insert(&head ,11);
    Insert(&head ,9);
    Insert(&head ,17);
    Insert(&head ,25);
    Insert(&head ,7);
    Insert(&head ,35);
    Insert(&head ,10);
    Insert(&head ,15);
    Insert(&head ,21);
    Insert(&head ,26);
    Insert(&head ,37);
    Insert(&head ,89);
    Insert(&head ,91);
    Insert(&head ,65);
    Insert(&head ,12);
    Insert(&head ,20);
    Insert(&head ,44);
    Insert(&head ,66);
    Insert(&head ,90);
    Insert(&head ,88);



   bRet = Search(head,36);
   if(bRet == true)
   {
    printf("Element is present");
   }
   else
   {
    printf("There is no such element");
   }
   iRet = Count(head);
   printf("Number of node is :  %d\n",iRet);

  return 0 ;
}