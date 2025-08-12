#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

   
    
    while(iNo != 0)
    {
        iDigit = iNo % 2;
       
        iCount = iCount + iDigit;

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