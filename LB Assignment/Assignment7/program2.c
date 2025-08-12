#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConvertFactor = 70;
    int iRet = 0;
    iRet = iNo *iConvertFactor;
    return iRet;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number of USD : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d\n",iRet);
    return 0;
}