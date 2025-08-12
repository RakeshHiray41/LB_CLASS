#include<iostream>
using namespce std;

struct node 
{
    int data;
    struct node *next;
};

class StackX
{
    private :

        struct node *first;
        int iCount;
    
    public:

        StackX();
        void Push(int);
        int Pop();
        void Display();
        int Count();
};

StackX :: StackX()
{
    {
        first = null;
        iCount = 0; 
    
    }
}
void StackX :: Push(int no)
{
    struct node * newn = NULL;

    newn = new node;

    newn->next = NULL;
    newn->data = no;

    newn->next = first;
    first = newn;

    iCount++;
}
int StackX:: Pop()
{
    struct node * temp = NULL;
    int value = 0;

    if(first == NULL)
    {
        cout<<"Unable to pop as stack is empty";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;
        
        return value;
    }
    
}
void StackX:: Display()
{
    struct node * temp = NULL;

    temp = first;
    
    while(temp->next != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
}

void StackX :: Count()
{
    return iCount;
}

int main()
{   
    StackX *sobj = new StackX();
    int iRet = 0;

    sobj->Push(51);
    sobj->Push(21);
    sobj->Push(11);

    sobj->Display();
    iret = sobj->Count();
    cout<<"number of elements are : "<<iRet<<"\n";

    iRet = sobj->pop();
    cout<<"Removed element : "<< iRet<<"\n";

    iRet = sobj->pop();
    cout<<"Removed element : "<< iRet<<"\n";

    sobj->Display();
    iret = sobj->Count();
    cout<<"number of elements are : "<<iRet<<"\n";

    delete sobj;
    
    return 0;

}