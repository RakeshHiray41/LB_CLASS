#include<iostream>
using namespace std;

template <class T>
T Max( T *Arr, int iSize)
{
    T max = 0;
    int iCnt = 0;
    max = Arr[0];
    
    for(iCnt = 0 ;iCnt < iSize; iCnt++)
    {
        if(max < Arr[iCnt])
        {
            max = Arr[iCnt];
        }
    }
    return max;

}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.8,3.7,9.8,8.7};

    int iRet = Max(arr,5);
    cout<<"Maximum : "<<iRet<<"\n";

    float fRet = Max(brr,4);
    cout<<"Maximum : "<<fRet<<"\n";

    return 0;
}