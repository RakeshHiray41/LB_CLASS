#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iRet = 0;
    iRet = iNo *1000;
    return iRet;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Distance in KM : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance iin metre is : %dm\n",iRet);
    return 0;
}