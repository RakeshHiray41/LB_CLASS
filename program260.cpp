
#include<iostream>
using namespace std;
template <class T>
void Display(T Arr[],int iLength)
{
  cout<<"Elements of the are : \n";
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }   
}
int main()
{
    int Size;
    int iCnt;
   
    cout<<"Enter the Number of Element : \n";
    cin>>Size;
    
    int *ptr= new int[Size];

    cout<<"Enter the element : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    Display(ptr,Size);
    
    delete []ptr;
    return 0;
}    