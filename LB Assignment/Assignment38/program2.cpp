#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T iSum = 0;
    int iCnt = 0;

    if(iSize <= 0)
    {
        cout<<"Invalid size\n";
        return -1;
    }
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum += arr[iCnt];
    }
    return iSum;
}

int main()
{

    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = AddN(arr,5);
    cout<<"Result : "<<iRet<<"\n";

    float fRet = AddN(brr,4);
    cout<<"Result : "<<fRet<<"\n";

    return 0;
}