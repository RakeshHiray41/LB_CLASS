#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    
    int iCount = 0;

    while(iNo != 0)
    {
         
        iCount = iCount + (iNo % 2);
        iNo = iNo /2;

    }
    
    return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter the Number :\n";
    cin>>iValue;

    iRet = CountOne(iValue);
    cout<<"Count of one is : "<<iRet<<"\n";
    
    return 0;
}