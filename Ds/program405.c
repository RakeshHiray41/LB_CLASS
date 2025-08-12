#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact = 1;

    if(iNo > 1)
    {
        iFact *= iNo;
      
       
        Factorial(iNo--); 
    } 
    return iFact;
}
int main()
{
    int iRet = 0;
    int iValue = 6;
    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);
    return 0;
}