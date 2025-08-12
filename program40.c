 // sum of factors of number is equal to number => perfect number
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0) //upadater 
    {
        iNo = -iNo;
    }
    if(iNo == 2)
    {
        return bFlag;
    }

    for( iCnt =2 ;iCnt <= (iNo/2) ;iCnt++)
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
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    bRet=CheckPrime(iValue);

    if(bRet ==true)
    {
        printf("%d is prime Number \n",iValue);
    }
    else
    {
        printf("%d is not prime Number\n",iValue);
    }

   
    
    return 0;
} 