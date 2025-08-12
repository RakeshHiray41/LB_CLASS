#include<iostream>
using namespce std;
template <class T>
struct node 
{
    T data;
    struct node<T> *next;
};
template <class T>
class QueueX
{
    private :

        struct node<T> *first;
        int iCount;
    
    public:

        QueueX();
        void Enqueue(T);
        T Dequeue();
        void Display();
        int Count();
};
template <class T>
QueueX<T> :: QueueX()
{
    {
        first = null;
        iCount = 0; 
    
    }
}
template <class T>
void QueueX<T> :: Enqueue(T no)
{
    struct node * newn<T> = NULL;
    struct node * temp<T> = NULL;
    newn<T> = new node<T>;

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
template <class T>
T QueueX<T>:: Dequeue()
{
    struct node<T> * temp = NULL;
    T value = 0;

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
template <class T>
void QueueX<T>:: Display()
{
    struct node<T> * temp = NULL;

    temp = first;
    
    while(temp->next != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
}
template <class T>
void QueueX <T>:: Count()
{
    return iCount;
}

int main()
{   
    QueueX<int> *sobj = new QueueX<int>();
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