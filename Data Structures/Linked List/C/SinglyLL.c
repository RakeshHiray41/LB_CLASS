//////////////////////////////////////////////////////////////////////
//
// File name :       SinglyLL 
// Discription :     Implementation of Singly Linear Linked List 
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
//////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
    
}NODE, * PNODE, ** PPNODE;
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   InsertFirst() 
// Discription :     Insert elements in Singly Linear Linked List at first position
// Input   :         (struct node **,int)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> next = NULL;
    newn -> data = no;

    if(*first == NULL)
    {
        *first = newn;
    }
    else 
    {
        newn -> next = (*first);
        *first = newn;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   InsertLast() 
// Discription :     Insert elements in Singly Linear Linked List at last position
// Input   :         (struct node **,int)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> next = NULL;
    newn -> data = no;

    if(*first == NULL)
    {
        *first = newn;
    }
    else 
    {   temp = *first ;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   DeleteFirst() 
// Discription :     Delete elements from Singly Linear Linked List at first position
// Input   :         (struct node **)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first) -> next;

        free(temp);
    }
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   DeleteLast() 
// Discription :     Delete elements from Singly Linear Linked List at Last position
// Input   :         (struct node **)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp -> next =NULL;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   Display() 
// Discription :     Diplay elements from Singly Linear Linked List .
// Input   :         (struct node *)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
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
// Function name :   Count() 
// Discription :     Count elements from Singly Linear Linked List .
// Input   :         (struct node *)
// Output  :         int
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   InsertAtPos() 
// Discription :     Insert elements from Singly Linear Linked List at any position.
// Input   :         (struct node **,int,int)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first,int no, int pos)
{
    int iCount = 0;
    int iCnt = 0;

    iCount =  Count(*first);

    PNODE temp = NULL;
    PNODE newn = NULL;
    
    if(pos < 1 || pos > iCount+1)
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
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> next = NULL;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   DeleteAtPos() 
// Discription :     Delete elements from Singly Linear Linked List at any position.
// Input   :         (struct node **,int)
// Output  :         -
// Author :          Mangesh Ashok Bedre
// Date :            8/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int pos)
{
    int iCnt = 0;
    int iCount = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if(pos < 1 || pos > iCount)
    {
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
        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next = temp -> next -> next;

        free(target);
    }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iChoice = 0;
    int no = 0;
    int iPos = 0;

    printf("---------------------------------------------------------------------------\n");
    while(true)
    {
        printf("---------------------------------------------------------------------------\n");
        printf("----------------------Singly Linked List-----------------------------------\n");
        printf("---------------------------------------------------------------------------\n");

        printf("1.Insert at First in Linked List.\n");
        printf("2.Insert at Last in Linked List.\n");
        printf("3.Insert at Position you want in Linked List.\n");
        printf("4.Delete first position from linked list.\n");
        printf("5.Delete last position from linked list.\n");
        printf("6.Delete any position you want from linked list.\n");
        printf("7.Display Linked list. \n");
        printf("8.Display Number of elements from linked list.\n");
        printf("0.exit.");
        printf("\n");

        printf("---------------------------------------------------------------------------\n");
        printf("Enter your choice : \n");
        scanf("%d",&iChoice);
        
        

        if(iChoice == 1)
        {
            printf("Enter the data you want to insert : \n");
            scanf("%d",&no);
            InsertFirst(&head,no);     
        }
        else if(iChoice == 2)
        {
            printf("Enter the data you want to insert : \n");
            scanf("%d",&no);
            InsertLast(&head,no);   
        }
        else if(iChoice == 3)
        {
            printf("Enter the data you want to insert : \n");
            scanf("%d",&no);

            printf("Enter the position at you want insert the data : \n");
            scanf("%d",&iPos);
            InsertAtPos(&head,no,iPos);
        }
        else if(iChoice == 4)
        {
            DeleteFirst(&head);
        }
        else if(iChoice == 5)
        {
            DeleteLast(&head);
        }
        else if(iChoice == 6)
        {
            printf("Enter the position at you want delete the data : \n");
            scanf("%d",&iPos);
            DeleteAtPos(&head,iPos);
        }
        else if(iChoice == 7)
        {
            Display(head);
        }
        else if(iChoice == 8)
        {
            iRet = Count(head);
            printf("Number of elements are : %d\n",iRet);
        }
        else if(iChoice == 0)
        {
            printf("---------------------------------------------------------------------------\n");
            printf("--------------------------Thank you----------------------------------------\n");
            printf("---------------------------------------------------------------------------\n");
            break;
        }
        else
        {
            printf("Invalid Choice try again\n");
            break;
        }
    }
    return 0;
}