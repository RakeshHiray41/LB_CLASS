#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo, UINT iPos1, UINT iPos2)  //4 7 bit off 
{
    UINT iMask1 = 1; 
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
    
    iMask = iMask1 & iMask2;
    iResult = iNo & iMask; 

    return iResult;
    
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iLocation1 = 0,iLocation2 = 0;

    cout<<"Enter Number :\n";
    cin>>iValue;

    cout<<"Enter First Position\n";
    cin>>iLocation1;

    cout<<"Enter Second Position\n";
    cin>>iLocation2;

    iRet = OffBitMultiple(iValue,iLocation1,iLocation2);

    cout<<"Updated number is : "<<iRet<<"\n";
    
    return 0;
}