/////////////////////////////////////////////////////////////////////////
//
// File name :       program1.c 
// Discription :     Reverse each element of singly linked list.
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   InsertFirst() 
// Discription :     Insert elements in Singly Linear Linked List at first position.
// Input   :         (struct node **,int)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first,int no)
{
    PNODE newn =  NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   Display() 
// Discription :     Diplay elements from Singly Linear Linked List .
// Input   :         (struct node *)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   Reverse() 
// Discription :     Reverse each element of singly linked list.
// Input   :         (struct node *)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void Reverse(PNODE first)
{
    
    int iCnt = 0, iDigit = 0,iNo = 0,iRev = 0;

    while(first != NULL)
    {   
        iNo = first -> data;
        iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iRev  = iRev*10 + iDigit;

            iNo = iNo / 10;
        }

        first -> data = iRev;
        first = first -> next;
    }
} 
int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);
    
    Display(head);
    Reverse(head);
    Display(head);

    return 0;
}