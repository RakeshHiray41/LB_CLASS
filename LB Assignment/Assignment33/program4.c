// Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo,int iPos1, int iPos2)
{
    UNIT iMask1 = 0,iMask2 = 0,iResult = 0;
   
    iMask1 = 1;
    iMask2 = 1;

    iMask1 = iMask1 <<(iPos1 - 1);
    iMask2 = iMask2 <<(iPos2 - 1);

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
    int iLocation1 = 0,iLocation2 = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    printf("Enter the first  location : \n");
    scanf("%d",&iLocation1);

    printf("Enter the second location : \n");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2); 
    
    if(bRet == true)
    {
        printf("%d or %d bit is ON",iLocation1,iLocation2);
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0;
}