#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{   
    int iDigit = 0;
    bool bRet = false;
    if( iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bRet = true;
        }
        iNo = iNo / 10;
    }
    return bRet;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}