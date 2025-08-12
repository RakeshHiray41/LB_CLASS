#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev; //$
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    printf("NUll <=> ");

    while(first != NULL)
    {
        printf("|%d| <=> ",first->data);
        first = first -> next;
    }
    printf("NUll\n");
   
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn  = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL; //$

    if(*first ==NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        (*first) -> prev = newn;  // $
        *first = newn;
    }

}
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn  = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL; //$

    if(*first ==NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next; 
        }
        newn -> prev = temp;
        temp -> next = newn; //$ newn -> prev -> next = newn

    }
}


void DeleteFirst(PPNODE first)
{   
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if( (*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first)-> next;
        (*first) -> prev = NULL; // $

        free(temp);
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        return;
    }
    else if( (*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {   
        temp = *first;

        while(temp->next != NULL) // change
        {
            temp = temp ->next;
        }

        temp -> prev -> next = NULL;  // $
        free(temp);
    }

}
void InsertAtPos(PPNODE first, int no, int pos)
{
   PNODE newn = NULL;
   PNODE temp = NULL;
   int iCount = 0;
   int iCnt = 0;

   iCount = Count(*first);

   if((pos < 1) || (iCount+1 < pos ))
   {
    printf("Invalid position");
    return;
   }

   if(pos == 1)
   {
        InsertFirst(first,no);
   }
   else if(pos == iCount+1)
   {
        InsertLast(first,no);
   }
   else
   {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < (pos-1);iCnt++)
        {
            temp = temp ->next;
        }

        newn -> next = temp ->next;
        newn -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
   }
   
}
void DeleteAtPos(PPNODE first,int pos)
{
    PNODE newn = NULL;
    int iCount = 0;

     iCount = Count(*first);

    if((pos < 1) || (iCount < pos ))
    {
        printf("Invalid position");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {

    }

}
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&head,105,5);
    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);
    
    return 0;
}