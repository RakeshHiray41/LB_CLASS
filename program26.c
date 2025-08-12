#include<stdio.h>
// input 3
// 1*2*3

int Factorial(int iNo)
{   
    int iFact= 1;
    int iCnt = 0;
    
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

   
    printf("Factorial of %d is %d \n",iValue,iRet);
}