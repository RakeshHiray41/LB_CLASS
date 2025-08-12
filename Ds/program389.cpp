#include<iostream>
using namespce std;

struct node 
{
    int data;
    struct node *next;
};

class QueueX
{
    private :

        struct node *first;
        int iCount;
    
    public:

        QueueX();
        void Enqueue(int);
        int Dequeue();
        void Display();
        int Count();
};

QueueX :: QueueX()
{
    {
        first = null;
        iCount = 0; 
    
    }
}
void QueueX :: Enqueue(int no)
{
    struct node * newn = NULL;
    struct node * temp = NULL;
    newn = new node;

    newn->next = NULL;
    newn->data = no;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    

    iCount++;
}
int QueueX:: Dequeue()
{
    struct node * temp = NULL;
    int value = 0;

    if(first == NULL)
    {
        cout<<"Unable to pop as Queue is empty";
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
void QueueX:: Display()
{
    struct node * temp = NULL;

    temp = first;
    
    while(temp->next != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
}

void QueueX :: Count()
{
    return iCount;
}

int main()
{   
    QueueX *sobj = new QueueX();
    int iRet = 0;

    sobj->Enqueue(51);
    sobj->Enqueue(21);
    sobj->Enqueue(11);

    sobj->Display();
    iret = sobj->Count();
    cout<<"number of elements are : "<<iRet<<"\n";

    iRet = sobj->Dequeue();
    cout<<"Removed element : "<< iRet<<"\n";

    iRet = sobj->Dequeue();
    cout<<"Removed element : "<< iRet<<"\n";

    sobj->Display();
    iret = sobj->Count();
    cout<<"number of elements from queue : "<<iRet<<"\n";

    delete sobj;
    
    return 0;

}