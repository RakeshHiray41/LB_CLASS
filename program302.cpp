#include<iostream>
using namespace std;
 
template <class T>
T Maxmimum(T Arr[], int iSize)
{
    int iCnt = 0;
    T iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt <iSize ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{   

    int *ptr = NULL;
    int iLength = 0, iCnt = 0,iRet = 0;


    cout<<"Enter number of Element : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the element : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elemets of Array are :\n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
        
    }

    iRet = Maxmimum(ptr,iLength);
    cout<<"Maximum Number : "<<iRet<<"\n";
    
    delete []ptr;
    return 0;
}