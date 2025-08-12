// sum of factors of number is equal to number => perfect number
#include<stdio.h>
#include<stdbool.h>

bool SumFactor(int iNo)
{
    int iCnt = 0;
    int iSumF = 0;

    if(iNo < 0) //upadater 
    {
        iNo = -iNo;
    }

    for( iCnt =1 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSumF +=iCnt ;
        }
    } 

    if(iSumF == iNo)
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
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    bRet=SumFactor(iValue);

    if(bRet ==true)
    {
        printf("%d is perfect Number \n",iValue);
    }
    else
    {
        printf("%d is not perfect Number\n",iValue);
    }

   
    
    return 0;
} 