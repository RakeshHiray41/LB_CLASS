#include<stdio.h>
// input 5
// 1+2+3+4+5

int Summation(int iNo)
{   
    int iSum= 0;
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++ )
    {
        iSum += iCnt;
    }
    
    return iSum;
}

int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("Enter number to calculate Summation : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

   
    printf("Summation is %d",iRet);
}