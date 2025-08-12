#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node * PNODE;
typedef struct node NODE;

class DoublyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:

        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyCLL :: DoublyCLL()
{
    cout<<"Inside constructor\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

void DoublyCLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn  = new NODE;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if ((first == NULL) && (last == NULL)) //LL is empty
    {
        first = newn;
        last  = newn;
    }
    else    // LL contains atleat 1 node
    {
        newn -> next = first;
        first -> prev = newn;
        first = newn;
    }

    last -> next = first;
    first -> prev = last;
    
    iCount++;
}

void DoublyCLL :: InsertLast(int no)
{
    PNODE newn = NULL;

    newn  = new NODE;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if ((first == NULL) && (last == NULL)) //LL is empty
    {
        first = newn;
        last  = newn;
    }
    else    // LL contains atleat 1 node
    {
        last -> next = newn;
        newn -> prev = last;
        last = newn;
    }

    last -> next = first;
    first -> prev = last;
    
    iCount++;
}


void DoublyCLL :: Display()
{
    PNODE temp = NULL;
    temp = first;

    if((first == NULL)&&(last == NULL))
    {
        cout<<"Linked is Empty\n";
        return;
    }
    
    cout<<"Elements of Linked list are : \n";

    do
    {
        cout<<"| "<<temp -> data<<" |"<<" <=> ";
        temp = temp -> next;
        
    }while(temp != first);
    cout<<"\n";
}

int DoublyCLL :: Count()
{
    return iCount;
}

void DoublyCLL :: DeleteFirst()
{
    if((first == NULL) && (last == NULL)) // LL empty
    {
        return;
    }
    else if(first == last)      // LL has 1 element
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else                // LL contain more than 1
    {
        first = first -> next;
        delete first -> prev ;// delete last -> next;

        last -> next = first; 
        first -> prev = last;

    }
    iCount--;

}
void DoublyCLL :: DeleteLast()
{
    if((first == NULL) && (last == NULL)) // LL empty
    {
        return;
    }
    else if(first == last)      // LL has 1 element
    {
        delete last;

        first = NULL;
        last = NULL;
    }
    else                // LL contain more than 1
    {
        last = last ->  prev;
        delete last -> next;   

        last -> next = first;
        first ->prev = last;
    }
    iCount--;

}

void DoublyCLL :: InsertAtPos(int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = first;

        for(iCnt = 1 ;iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp; 

        iCount++;
        
    }
}

void DoublyCLL :: DeleteAtPos(int pos)
{
    
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1 ;iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next  = target -> next;
        target -> next -> prev = temp;

        delete target;

        iCount--;
        
    }
}
int main()
{
    int iRet = 0;

    DoublyCLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
      
    dobj.InsertAtPos(105,5);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteAtPos(5);
    
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;

}