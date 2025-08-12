#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 8;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter Number :\n";
    cin>>iValue;
    
    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"4th bit is on";
    }
    else
    {
        cout<<"4th bit is off";
    }
    
    return 0;
}