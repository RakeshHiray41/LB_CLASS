#include<iostream>
using namespace std;

template<class T>
T Frequency(T *Arr, int iSize,T iNo)
{
    int icnt = 0;
    T iCount = 0;

    for(icnt = 0; icnt < iSize ;icnt++)
    {
        if(Arr[icnt] == iNo)
        {
            iCount++;
        }
    }
   return iCount;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    cout<<"Frequency : "<<iRet<<"\n";


    return 0;
}