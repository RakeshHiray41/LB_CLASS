
#include<iostream>
using namespace std;
template <class T>
T Addition(T Arr[],int iLength)
{
    T Sum = 0;
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
    float ret;
   
    cout<<"Enter the Number of Element : \n";
    cin>>Size;
    
    float *ptr= new float[Size];

    cout<<"Enter the element : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    ret = Addition(ptr,Size);
    cout<<"Addition is : "<<ret<<"\n";
    delete []ptr;
    return 0;
}    