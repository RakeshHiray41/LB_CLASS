/////////////////////////////////////////////////////////////////////////
//
// File name :       program4.c 
// Discription :     Find second maximum element from singly linear
//                   linked list.
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
// Function name :   SecMaximum() 
// Discription :     Return Second maximum from singly linear linked list.                   
// Input   :         (struct node *)
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
int SecMaximum(PNODE first)
{
    
    int iCnt = 0,iMax = 0,iSecMax = 0;

    iMax = first -> data;

    while(first != NULL)
    {   
        
        if(iMax < first->data)
        {
            iSecMax = iMax;
            iMax = first->data;
        }
        
        first = first -> next;
    }
    return iSecMax;
} 
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);
    
    iRet = SecMaximum(head);

    printf("Addition of All Even elements are : %d\n",iRet);
    
    return 0;
}