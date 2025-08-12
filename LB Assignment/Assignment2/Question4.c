#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
   
    for(iCnt = 1; iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCnt);

    Display(iValue,iCnt);

    return 0 ;
}