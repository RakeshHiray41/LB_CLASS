/////////////////////////////////////////////////////////////////////////
//
// File name :       program4.c 
// Discription :     Display smallest digits of all element from singly
//                   linear linked list.
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

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
// Function name :   DisplaySmall() 
// Discription :     Display smallest digits of all element from singly
//                   linear linked list.
// Input   :         (struct node *)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DisplaySmall(PNODE first)
{
    
    int iCnt = 0, iDigit = 0,iNo = 0,iMin = 0;

    while(first != NULL)
    {   
        iNo = first -> data;
        iMin = (int)INFINITY ;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iMin >  iDigit)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }

       
        printf("%d is smallest of digit of element\n",iMin);
        
        first = first -> next;
    }
} 
int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 89);
    InsertFirst(&head, 101);
    InsertFirst(&head, 6);
    InsertFirst(&head, 424);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);
    
    DisplaySmall(head);   

    return 0;
}