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
   }
   return bFlag;
   
  }
}
int main()
{ 
  PNODE head = NULL;
  bool bRet = false;

    Insert(&head ,11);
    Insert(&head ,9);
    Insert(&head ,17);
    Insert(&head ,25);
    Insert(&head ,7);
    Insert(&head ,35);
    Insert(&head ,10);
    Insert(&head ,15);
    Insert(&head ,21);

   bRet = Search(head,34);
   if(bRet == true)
   {
    printf("Element is present");
   }
   else
   {
    printf("There is no such element");
   }


  return 0 ;
}