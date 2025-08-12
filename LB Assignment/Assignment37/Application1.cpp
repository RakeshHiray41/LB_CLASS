/////////////////////////////////////////////////////////////////////////
//
// File name :       Application.cpp 
// Discription :     
// Author :          Mangesh Ashok Bedre
// Date :            25/07/2025
//
/////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
    Array(int value = 10)
    {
        //cout<<"Inside Connstructor\n";

        this->size = value;
        this->Arr = new int[size];
    }
    Array(Array &ref)
    {
        cout<<"Inside copy connstructor\n";

        this->size = ref.size;
        this->Arr = new int[this->size];

        for(int i = 0;i<size;i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }
    ~Array()
    {
        cout<<"Inside Destructor\n";
        delete []Arr;
    }


    inline void Accept();
    inline void Display();

};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0;i < this->size;i++)
    {
        cin>>Arr[i];
    }
}
void Array::Display()
{
    cout<<"Elements are\n";
    for(int i = 0;i < this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}
class ArrSearch : public Array
{
    public:

    ArrSearch(int no = 10) : Array(no)
    {}
    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};
int ArrSearch::SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}
int ArrSearch::Frequency(int value)
{
    int icnt = 0;

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}
int ArrSearch::SearchLast(int value)
{
    int icnt = 0;
    int index = 0;
    bool Flag = false;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        if(Arr[icnt] == value)
        {
           index = icnt; 
           Flag = true;
        }
    
    }
    if(Flag == false)
    {
        return -1;
    }
    else
    {
        return index+1;
    }

    
}
int ArrSearch::EvenCount()
{
    int icnt = 0;
    int iCountEven = 0;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        if((Arr[icnt] % 2) == 0)
        {
            iCountEven++;
        }
    }

    return iCountEven;
}
int ArrSearch::OddCount()
{
    int icnt = 0;
    int iCountOdd = 0;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        if((Arr[icnt] % 2) != 0)
        {
            iCountOdd++;
        }
    }

    return iCountOdd;
}
int ArrSearch::SumAll()
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 0 ; icnt < size; icnt++)
    {
        iSum = iSum + Arr[icnt];
    }

    return iSum;
}


int main()
{
    int iValue = 0;
    int iChoice = 0;
    int iret = 0;

        cout<<"------------------------------------------------------------------------------------\n";
    cout<<"------------------------Operation on n Numbers--------------------------------------\n";
    cout<<"------------------------------------------------------------------------------------\n";
    cout<<"Enter the number of elements : \n";
    cin>>iValue;
    ArrSearch sobj1(iValue);


    while(true)
    {
        cout<<"------------------------------------------------------------------------------------\n";
        cout<<"--------------------------Please Select your option---------------------------------\n";
        cout<<"------------------------------------------------------------------------------------\n";

        cout<<"0.exit\n";
        cout<<"1.Display of elements  \n";
        cout<<"2.Entering elements \n";
        cout<<"3.Get frequency of elements\n";
        cout<<"4.Get first Occurance of element \n";
        cout<<"5.Get last Occurance of element \n";
        cout<<"6.Get Sum of elements \n";
        cout<<"7.Get Count of Odd elements\n";
        cout<<"8.Get Count of Even elements\n";
        
        cout<<"------------------------------------------------------------------------------------\n";

        
        cout<<"------------------------------------------------------------------------------------\n";
        cout<<"Enter your choice : \n";
        cin>>iChoice;

        if(iChoice == 0)
        {
            cout<<"Thank you to use our application\n";
            break;
        }
        else if(iChoice == 1)
        {
            
           sobj1.Display();

        }
        else if(iChoice == 2)
        {
            sobj1.Accept();
        }
        else if(iChoice == 3)
        {
            cout<<"Enter the number to get its count of appearance : \n";
            cin>>iValue;
            iret = sobj1.Frequency(iValue);
            cout<<"Frequency is : "<<iret<<"\n";

        }
        else if(iChoice ==4)
        {
            cout<<"Enter the number for get its first Occurance : \n";
            cin>>iValue;

            iret = sobj1.SearchFirst(iValue);
            if(iret == -1)
            {
                cout<<"Not found\n";
            }
            else 
            {
                cout<<"First occurance is : "<<iret<<"\n";
            }
        }
        else if (iChoice == 5)
        {
            cout<<"Enter the number for get its last Occurance : \n";
            cin>>iValue;

            iret = sobj1.SearchLast(iValue);

            if(iret == -1)
            {
                cout<<"Not found\n";
            }
            else 
            {
                cout<<"Last occurance is : "<<iret<<"\n";
            }
        }
        else if(iChoice == 6)
        {
            iret = sobj1.SumAll();
            cout<<"Sum of all elements is : "<<iret<<"\n";
        }
        else if(iChoice == 7)
        {
            iret = sobj1.OddCount();
            cout<<"Odd count of elements is : "<<iret<<"\n";
        }
        else if(iChoice == 8)
        {
            iret = sobj1.EvenCount();
            cout<<"Even count of elements is : "<<iret<<"\n";

        }
        else   
        {
            cout<<"Invalid choice\n";
        }
    }
    
    return 0;

}