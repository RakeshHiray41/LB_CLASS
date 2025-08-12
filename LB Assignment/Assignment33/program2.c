// Write a program which accept two numbers from user and display position
// of common ON bits from that two numbers.

// Input : 10 15 (1010 1111)
// Output : 2 4

#include<stdio.h>

typedef unsigned int UNIT;

void CommonnBits(UNIT iNo1,UNIT iNo2)
{
    UNIT iMask = 0,iResult = 0;
    int iCnt = 0;
    int iCommonPos = 0;

    iMask = 1;
    iCnt = 1;
    iResult = iNo1 & iNo2;

    while(iCnt <= 32)
    {
        
        if(iMask == (iResult & iMask))
        {
            printf("Common position is %d\n",iCnt);
        }
        iMask = iMask << 1;
        iCnt++;
    }    

}

int main()
{
    UNIT iValue1 = 0;
    UNIT iValue2 = 0;
    

    printf("Enter First Number : \n");
    scanf("%u",&iValue1);

    printf("Enter second Number : \n");
    scanf("%u",&iValue2);

    CommonnBits(iValue1,iValue2);

    return 0;
}
