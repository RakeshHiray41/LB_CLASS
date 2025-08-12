// Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.

// Input : 10 2
// Output : TRUE


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo,int iPos)
{
    UNIT iMask = 0,iResult = 0;
   
    iMask = 1;
    

    iMask = iMask <<(iPos - 1);
    

    if((iMask & iNo))
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

   
    bRet = ChkBit(iValue,iLocation1); 
    
    if(bRet == true)
    {
        printf("%d bit is ON",iLocation1);
    }
    else
    {
        printf("Bit are OFF");
    }

    return 0;
}