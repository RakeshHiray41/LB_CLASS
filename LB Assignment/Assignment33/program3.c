// Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.

// Input : 257
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
    UNIT iMask1 = 0,iMask2 = 0,iResult = 0;
   
    iMask1 = 0x00000100; //9th bit 
    iMask2 = 0x00000800;// 12th bit

    if((iMask1 & iNo) || (iMask2 & iNo))
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
    UNIT iValue = 0; 
    bool bRet = false;

    printf("Enter the Number to check 9th or 12th bit : \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue); 
    
    if(bRet == true)
    {
        printf("9th or 12th bit is ON");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0;
}