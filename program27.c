#include<stdio.h>
#define ERR_INVALID -1
// input 3
// 1*2*3

int Factorial(int iNo) //numeric data has by default signed if not specify
{   
    int iFact= 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++ )
    {
        iFact *= iCnt;
    }
    
    return iFact;
}

int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("Enter number to calculate factorial :\n ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

   if( iRet == ERR_INVALID)
   {
        printf("Invalid input");
   }
   else
   {
        printf("Factorial of %d is %d \n",iValue,iRet);
   }
   
}