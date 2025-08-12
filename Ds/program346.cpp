#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private:
        
        PNODE first;
        PNODE last;
        int iCount;
    
    public:

        SinglyCLL()
        {
            this->first = NULL;
            this->last = NULL;
            this->iCount = 0;

            cout<<"Inside constructor\n";
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn -> data = no;
            newn -> next = NULL;

            if((first == NULL) &&(last == NULL)) //if(icount == 0)
            {
                first = newn;
                newn = first;
                
                last -> next = first;

            }
            else
            {
                newn -> next = first;
                first = newn;

                last -> next = first;
            }
           
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;

            newn -> data = no;
            newn -> next = NULL;

            if((first == NULL) &&(last == NULL)) //if(icount == 0)
            {
                first = newn;
                newn  = first;
                
                last -> next = first;

            }
            else
            {
                last -> next = newn;
                last = newn;

                last -> next = first;
            }
            
            iCount++;
        }

        void InsertAtPos(int no,int pos)
        {
            iCount++;
        }

        void DeleteFirst()
        {
            iCount--;
        }

        void DeleteLast()
        {
            iCount--;
        }

        void DeleteAtPos(int pos)
        {
            iCount--;
        }

        void Display()
        {
            
        }
        int Count()
        {
            return iCount;
        }
};

int main()
{
    int iRet = 0;
    SinglyCLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    iRet= sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    return 0;
}