// Write a program which accept one number and position from user and off
// that bit. Return modified number.

// Input : 10 2
// Output : 8

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0,iResult = 0;

    iMask = 1;

    iMask = ~(iMask << (iPos - 1));

    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0; 
    int iLocation = 0;
    

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    printf("Enter the  location : \n");
    scanf("%d",&iLocation);

   
    iRet = OffBit(iValue,iLocation); 
    
    printf("Modified Number is : %d\n",iRet);
   

    return 0;
}