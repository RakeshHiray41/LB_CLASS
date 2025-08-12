
#include<iostream>
using namespace std;

int main()
{
    int Size,iCnt;
   
    cout<<"Enter the Number of Element : \n";
    cin>>Size;
    
    int *ptr= new int[Size];

    cout<<"Enter the element : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    
    cout<<"Elements of the are : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }
    delete []ptr;
    return 0;
}    