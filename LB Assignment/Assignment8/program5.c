#include<stdio.h>

double SquareMeter(int iNo)
{
    double dRet = 0.0;
    double fVar = 0.0929;
    dRet =(iNo)*fVar ;
    
    return dRet;
}

int main()
{
     int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square foot : \n");
    scanf("%d",&iValue);
   

    dRet = SquareMeter(iValue);
    printf("Area in square meter is: %f\n",dRet);

    return 0 ;
}