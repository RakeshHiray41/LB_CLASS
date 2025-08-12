/////////////////////////////////////////////////////////////////////////
//
// File name :       program2.c 
// Discription :     Displays all elements which are prime from singly
//                   linear linked list.
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
    printf("NULL");
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   DisplayPrime() 
// Discription :     Displays all elements which are perfect from singly
//                   linear linked list.
// Input   :         (struct node *)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DisplayPrime(PNODE first)
{
    
    int iCnt = 0;

    while(first != NULL)
    {   
        for(iCnt = 2 ; iCnt <= (first->data)/2 ; iCnt++)
        {
            if(((first -> data) % iCnt)==0)
            {
                break;
            }
        }
        if(iCnt > (first->data)/2 )
        {
            printf("%d is Prime number\n",first->data);
        }
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
    
    DisplayPrime(head);
    return 0;
}