// Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number.

// Input : 79
// Output : 15

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0,iResult = 0;

    iMask = 0x00000040 ;

    iMask = ~iMask;
    
    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0; 
   
    

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    
   
    iRet = OffBit(iValue); 
    
    printf("Modified Number is : %d\n",iRet);
   

    return 0;
}