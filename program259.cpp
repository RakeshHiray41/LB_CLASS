
#include<iostream>
using namespace std;

void Display(float Arr[],int size)
{
  cout<<"Elements of the are : \n";
    for(int iCnt = 0; iCnt < Size; iCnt++)
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
    
    float *ptr= new float[Size];

    cout<<"Enter the element : \n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    Display(ptr,Size);
    
    delete []ptr;
    return 0;
}    