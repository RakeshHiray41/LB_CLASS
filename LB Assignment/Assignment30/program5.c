// Write a program which checks whether first and last bit is On or
// OFF. First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
    UNIT iMask = 0,iResult = 0;
    

    iMask = 0x80000001;
    
   
    iResult = iNo & iMask;

    return(iResult == iMask);

}

int main()
{
    UNIT iValue = 0;
    bool bRet = false;

    printf("Enter the Number check whether 1st and 32th bit is ON or OFF: \n");
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