// Write a program which checks whether 15th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
    UNIT iMask = 0,iResult = 0;

    iMask = 0x00004000;
    

    iResult = iNo & iMask;

    return(iResult == iMask);

}

int main()
{
    UNIT iValue = 0;
    bool bRet = false;

    printf("Enter the Number check whether 15th bit is ON or OFF: \n");
    scanf("%d",&iValue);

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