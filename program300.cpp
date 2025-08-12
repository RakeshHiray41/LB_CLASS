#include<iostream>
using namespace std;
 


int main()
{   

    int *ptr = NULL;
    int iLength = 0, iCnt = 0;


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
        cout<<"Enter the element : "<<ptr[iCnt]<<"\n";
        
    }
    
    return 0;
}