#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dRet = 0.0;
    float fVar = 0.55555559;
    dRet =(fTemp - 32)*fVar ;
    
    return dRet;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);
   

    dRet = FhtoCs(fValue);
    printf("Tempereture in celcius is: %f\n",dRet);

    return 0 ;
}