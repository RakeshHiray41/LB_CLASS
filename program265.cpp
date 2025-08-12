#include<iostream>
using namespace std;

int CountZero(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

   
    
    while(iNo != 0)
    {
        iDigit = iNo % 2;
       
        iNo = iNo /2;

        if(iDigit == 0)
        {
            iCount++;
            
        }
    }
    
    return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter the Number :\n";
    cin>>iValue;

    iRet = CountZero(iValue);
    cout<<"Count of one is : "<<iRet<<"\n";
    
    return 0;
}