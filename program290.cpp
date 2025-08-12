#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask = 0x00000080; // 8th position
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iValue = 0;
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