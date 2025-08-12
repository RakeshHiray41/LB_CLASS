#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt ;
        }

    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect no",iValue);
    }
    else
    {
        printf("%d is not a perfect no:",iValue);
    }
    return 0;
}