// sum of factors of number is equal to number => perfect number
#include<stdio.h>
int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSumF = 0;

    if(iNo < 0) //upadater 
    {
        iNo = -iNo;
    }

    for( iCnt =1 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSumF +=iCnt ;
        }
    } 
    return iSumF; 
    

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet=SumFactor(iValue);

    printf("Addition of factor is : %d",iRet);
    
    return 0;
} 