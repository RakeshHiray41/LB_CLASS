#include<stdio.h>
#include<stdlib.h>

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
int main()
{ 
  PNODE head = NULL;

    Insert(&head ,11);
    Insert(&head ,9);
    Insert(&head ,17);
    Inorder(head);
  return 0 ;
}