#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first,PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> prev = NULL;
    newn -> next = NULL;

    if((*first == NULL)&&(*last == NULL))
    {
        *first = newn;
        *last = newn;

        (*last)->next = *first;
        (*first)->prev = *last;
    }
    else
    {
        newn -> next = *first;
        (*first) -> prev = newn;

        *first = newn;
        (*last)->next = *first;

        (*first) -> prev = *last;
    }
}

void InsertLast(PPNODE first,PPNODE last, int no)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> prev = NULL;
    newn -> next = NULL;

    if((*first == NULL)&&(*last == NULL))
    {
        *first = newn;
        *last = newn;

        (*last)->next = *first;
        (*first)->prev = *last;
    }
    else
    {
        (*last)->next = newn;
        newn -> prev = *last;
        *last = newn;

        (*last)->next = *first;
        (*first)->prev = *last;
    }
}



void DeleteFirst(PPNODE first,PPNODE last)
{
    if((*first == NULL)&&(*last == NULL))
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first) -> next;
        
        free((*last)->next);

        (*last)->next = *first;
        (*first)->prev = *last;


    }
}

void DeleteLast(PPNODE first,PPNODE last)
{
    PNODE temp = NULL;

    if((*first == NULL)&&(*last == NULL))
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        temp = (*last) -> prev;

        free(*last);

        *last = temp;

        (*last)->next = *first;
        (*first)->prev = *last;


    }
}


void Display(PNODE first, PNODE last)
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    do
    { 
        printf("| %d |->",first->data);
        first = first -> next;
    }
    while(first != last -> next);
    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0; 

    if((first == NULL) && (last == NULL))
    {
        return iCount;
    }
    do
    { 
        iCount++;
        first = first -> next;
    }
    while(first != last -> next);
    

    return iCount;
}

void InsertAtPos(PPNODE first,PPNODE last, int no,int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first,*last);

    if((pos < 1) || (pos > iCount+1))
    {
        printf("invalid position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first,last,no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(first,last,no);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> prev = NULL;
        newn -> next = NULL;

        for(iCnt = 1;iCnt < pos-1; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteAtPos(PPNODE first,PPNODE last,int pos)
{
    PNODE temp = NULL;
    PNODE target  = NULL;

    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first,*last);

    if((pos < 1) || (pos > iCount))
    {
        printf("invalid position\n");
        return;
    }
    if((pos == 1))
    {
        DeleteFirst(first,last);
    }
    else if(pos == iCount)
    {
        DeleteLast(first,last);
    }
    else
    {
        temp = *first;
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp -> next;
        }
        target = temp -> next;

        temp -> next = target -> next;
        target -> next -> prev = temp;

        free(target);
        
        

    }
}
int main()
{
     PNODE tail = NULL;
    PNODE head = NULL;

    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("----------------------------------------------------------------------\n");
    printf("--------------------Doublycircular LinkedList-------------------------\n");
    printf("----------------------------------------------------------------------\n");

    while(1)
    {
        printf("----------------------------------------------------------------------\n");
        printf("------------------------Please select the option----------------------\n");
        printf("----------------------------------------------------------------------\n");
        printf("0.Exit\n");
        printf("1.Insert new node at first position\n");
        printf("2.Insert new node at last position\n");
        printf("3.Insert new node at given position\n");

        printf("4.Delete the node from first position\n");
        printf("5.Delete the node from Last position\n");
        printf("6.Delete the node from given position\n");

        printf("7.Display all elements of LinkedList\n");
        printf("8.Count number of elements in LinkedList\n");
        
        printf("----------------------------------------------------------------------\n");

        scanf("%d",&iChoice);

        if(iChoice == 1)
        {
            printf("Enter the data that you want to insert\n");
            scanf("%d",&iValue);
            InsertFirst(&head,&tail,iValue);
        }
        else if(iChoice == 2)
        {
            printf("Enter the data that you want to insert\n");
            scanf("%d",&iValue);
            InsertLast(&head,&tail,iValue);
        }
        else if(iChoice == 3)
        {
            printf("Enter the data that you want to insert\n");
            scanf("%d",&iValue);
            printf("Enter the position at which position you want to insert new node\n");
            scanf("%d",&iPos);
            InsertAtPos(&head,&tail,iValue,iPos);
        }
        else if(iChoice == 4)
        {
            printf("Deleting the first element from LinkedList\n");

            DeleteFirst(&head,&tail);
        }
        
        else if(iChoice == 5)
        {
            printf("Deleting the Last element from LinkedList\n");
            DeleteLast(&head,&tail);
        }
        else if(iChoice == 6)
        {
            printf("Deleting the Node from given position\n");

            printf("Enter the position that you want to delete the node\n");
            scanf("%d",&iPos);

            DeleteAtPos(&head,&tail,iPos);

        }
        else if(iChoice == 7)
        {
            printf("Elements of LinkedList are : \n");
            Display(head,tail);
        }
        else if(iChoice == 8)
        {
            iRet = Count(head,tail);
            printf("Number of elements in the LinkedList : %d\n", iRet);
        }

        else if( iChoice == 0)
        {
            printf("Thank you for using our application\n");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }
    printf("----------------------------------------------------------------------\n");
        
    
    return 0;
}