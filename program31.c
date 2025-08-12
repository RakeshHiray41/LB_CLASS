#include<stdio.h>
#define ERR_INVALID -1
// input 3
// 1*2*3

unsigned long int Factorial( unsigned int iNo) //numeric data has by default signed if not specify
{   
    unsigned long int iFact= 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }
    iCnt = 1;
   while(iCnt <= iNo)
   {
     iFact *= iCnt;
     iCnt++;
   }
    
    return iFact;
}

int main()
{ 
    unsigned int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter number to calculate factorial :\n ");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

   if( iRet == ERR_INVALID)
   {
        printf("Invalid input");
   }
   else
   {
        printf("Factorial is %lu \n",iRet);
   }
   
}