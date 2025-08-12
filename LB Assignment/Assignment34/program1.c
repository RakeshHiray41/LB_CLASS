// Write a program which search first occurrence of particular element from
// singly linear linked list.
// Function should return position at which element is found.
// Function Prototype :

// int SearchFirstOcc( PNODE Head , int no );

// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element : 30
// Output : 3

#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(NULL == *first)
    {
        *first = newn;
        return;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}
int SearchFirstOcc( PNODE first , int no )
{
    int iCount = 0;
   
    iCount = 1;
    while(first != NULL)
    {
        if(first -> data == no)
        {
               break;
        }
        iCount++;
        first = first -> next;
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    InsertFirst(&head,51);
    InsertFirst(&head,111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    iRet = SearchFirstOcc(head,51);

    printf("First of occurance : %d\n",iRet);
    return 0;
}
