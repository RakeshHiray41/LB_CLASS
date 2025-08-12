#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{   
    bool bFlag = true;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime no",iValue);
    }
    else
    {
        printf("%d is not a prime no:",iValue);
    }
    return 0;
}