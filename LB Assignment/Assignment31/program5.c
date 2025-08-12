// Write a program which accept one number from user and on its first 4
// bits. Return modified number.

// Input : 73
// Output : 79

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0,iResult = 0;

    iMask = 0x0000000f ;

    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0; 
   
    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue); 
    
    printf("Modified Number is : %d\n",iRet);
   

    return 0;
}