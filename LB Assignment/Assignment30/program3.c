//Write a program which checks whether 7th & 15th & 21st , 28th bit
// is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
    UNIT iMask = 0,iResult = 0;
    

    iMask = 0x08104040;
    
   
    iResult = iNo & iMask;

    return(iResult == iMask);

}

int main()
{
    UNIT iValue = 0;
    bool bRet = false;

    printf("Enter the Number check whether 7th,15th ,21st and 28th bit is ON or OFF: \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}