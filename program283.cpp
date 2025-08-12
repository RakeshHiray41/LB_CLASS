
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos) //Bit on 
{
    UINT iMask = 1;
    UINT iResult = 0;

    if((iPos > 32) || (iPos <= 0)) //filter
    {
        cout<<"Invalid input";
        return false;
    }
    
    iMask = iMask << (iPos - 1);
    
    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0,iLocation = 0,iRet = 0;
    

    cout<<"Enter Number :\n";
    cin>>iValue;

    cout<<"Enter position :\n";
    cin>>iLocation;
    
    iRet = ToggleBit(iValue,iLocation);
    
    cout<<"Updated number is : "<<iRet<<"\n";
    
    
    return 0;
}