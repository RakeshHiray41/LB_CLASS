/////////////////////////////////////////////////////////////////////////
//
// File name :       program3.c 
// Discription :     Display product of all digits of all element from
//                   singly linear linked list. (Don’t consider 0)
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
// Function name :   DisplayDigitProduct() 
// Discription :     Display product of all digits of all element from
//                   singly linear linked list. (Don’t consider 0).
// Input   :         (struct node *)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DisplayDigitProduct(PNODE first)
{
    
    int iCnt = 0, iDigit = 0,iNo = 0,iProduct = 0;

    while(first != NULL)
    {   
        iNo = first -> data;
        iProduct = 1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit != 0)
            {
                iProduct  *=  iDigit;
            }

            iNo = iNo / 10;
        }

       
        printf("%d is product of digit of element\n",iProduct);
        
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
    
    DisplayDigitProduct(head);   

    return 0;
}