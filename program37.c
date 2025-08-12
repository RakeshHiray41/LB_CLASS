#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0) //upadater 
    {
        iNo = -iNo;
    }

    for( iCnt =2 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if(((iNo % iCnt)==0)  &&((iCnt % 2)==0))
        {
             printf("Factor is %d \n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    DisplayEvenFactors(iValue);
    
    return 0;
}    