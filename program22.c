#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        bResult = true;
    }
    else{
        bResult = false;
    }
    return bResult;
}

int main()
{ 
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&ivalue);

    bRet = CheckDivisible(ivalue);

    if(bRet==true)
    {
        printf(" %d is divisible by 5\n",iValue);
    }
    
    else
    {
        printf(" %d is divisible by 5\n",iValue);
    
    }

}