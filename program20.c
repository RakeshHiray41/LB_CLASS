#include<stdio.h>
#include<stdbool.h>

bool CheckEven( int iNo)
{   
    bool bResult = false;
    if((iNo % 2) == 0)
    {
        bResult =  true;
    }
    else
    {
        bResult =  false;
    }
    return bResult ;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to check whether it is even or odd : ");
    scanf("%d",&iValue);
    
    bRet = CheckEven(iValue);
    
    if(bRet == true)
    {
        printf(" %d is Even Number\n",iValue);
    }
    else
    {
        printf(" %d is odd number\n",iValue);   
    }
}