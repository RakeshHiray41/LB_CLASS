#include<stdio.h>

void PrintEven(int iNo)
{
    int iNum = 2;
    int iCnt = 0;
    iCnt = 1;

    if(iNo <= 0)
    {
        return;
    }

    while(iCnt<=iNo)
    {
        printf("%d\t",iNum);

        iNum +=2;
        iCnt = iCnt+ 1;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;

}