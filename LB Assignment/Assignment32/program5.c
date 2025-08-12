// Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits)

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0,iResult = 0;

    iMask = 0xf000000f ;

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0,iRet = 0; 
   
    

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    
   
    iRet = ToggleBit(iValue); 
    
    printf("Modified Number is : %d\n",iRet);
   

    return 0;
}