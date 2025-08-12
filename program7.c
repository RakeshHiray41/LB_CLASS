#include<stdio.h>
int CalculateTicket(int iAge)
{
    int iPrice = 0;
    if(iAge < 0){
        
        return -1;
    }
    if(iAge<=0 && iAge<=5)
    {
        return iPrice;
    }
    else if(iAge>5 && iAge<=18)
    {
        iPrice = 700;
        return iPrice;
    }
    else if(iAge>18 && iAge<=50){
        iPrice = 999;
        return iPrice;
    }
    else if(iAge >50 )
    {
        iPrice = 500;
        return iPrice;
    }
}
int main()
{
    int iAge = 0;
    printf("Entre your Age : ");
    scanf("%d",&iAge);
    int iRet = CalculateTicket(iAge);
    if( iRet == -1)
    {
        printf("Invalid Age!!");
    }
    else
    {
        printf("Your tickect price is :%d",iRet);
    }
    
    return 0;
}