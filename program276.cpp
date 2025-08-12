#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 2048;
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
        cout<<"12th bit is on\n";
    }
    else
    {
        cout<<"12th bit is off\n";
    }
    
    return 0;
}