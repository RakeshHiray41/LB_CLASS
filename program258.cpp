
#include<iostream>
using namespace std;

void Display(int Arr[])
{
  cout<<"Elements of the are : \n";
    for(int iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }   
}
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
    
    
    delete []ptr;
    return 0;
}    