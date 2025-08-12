// 1.Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.

// Input : 11
// Output : 3

#include<stdio.h>

typedef unsigned int UNIT;

int CountOne(UNIT iNo)
{
    UNIT iMask = 0,iResult = 0;
    int iCnt = 1;
    int iCount = 0;

    iMask = 1;
    
    while(iCnt <= 32)
    {
        
        if(iMask == (iNo & iMask))
        {
            iCount++;
        }
        iMask = iMask << 1;
        iCnt++;
    }
    
    return iCount;

    

}

int main()
{
    UNIT iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("Number of ON(1) bits in %d is %d",iValue,iRet);

   

    return 0;
}