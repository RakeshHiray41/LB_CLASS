#include<iostream>
using namespace std;

template <class T>
T Min( T *Arr, int iSize)
{
    T min = 0;
    int iCnt = 0;
    min = Arr[0];
    
    for(iCnt = 0 ;iCnt < iSize; iCnt++)
    {
        if(min > Arr[iCnt])
        {
            min = Arr[iCnt];
        }
    }
    return min;

}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.8,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    cout<<"Minimum : "<<iRet<<"\n";

    float fRet = Min(brr,4);
    cout<<"Minimum : "<<fRet<<"\n";

    return 0;
}