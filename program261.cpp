
#include<iostream>
using namespace std;
template <class T>
T Addition(T Arr[],int iLength)
{
    T Sum ;
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;   
}
int main()
{
    int Size;
    int iCnt;
    int ret;
   
    cout<<"Enter the Number of Element : \n";
    cin>>Size;
    
    int *ptr= new int[Size];

    cout<<"Enter the element : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    ret = Addition(ptr,Size);
    
    delete []ptr;
    return 0;
}    