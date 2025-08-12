// Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.

// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

UNIT ToggleBitRange(UNIT iNo, int iStart, int iEnd)
{
    UNIT iMask = 0,iResult = 0;
    
    while(iStart <= iEnd)
    {
        iMask = iMask | (1 << (iStart - 1));
        iStart++;
       
    }
    iResult = iMask ^ iNo;

    return iResult;
}
int main()
{
    UNIT iValue = 0; 
    int iLocation1 = 0,iLocation2 = 0;
    UNIT iRet = 0;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    printf("Enter the start  location : \n");
    scanf("%d",&iLocation1);

    printf("Enter the end location : \n");
    scanf("%d",&iLocation2);

    iRet = ToggleBitRange(iValue,iLocation1,iLocation2); 
    
    printf("Toggeled Number : %d\n",iRet);
    
    return 0;
}