#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double fAns = 0.0;
    fAns = PI *fRadius*fRadius;
    // printf("%d")
    return fAns;
}
int main()
{
    float iValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter Radius : \n");
    scanf("%f",&iValue);

    dRet = CircleArea(iValue);
    printf("Area of circle is : %f \n",dRet);

    return 0 ;
}