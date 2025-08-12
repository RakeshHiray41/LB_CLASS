#include<stdio.h>

int Factorial()
{
    static int i = 1;
    static int iFact = 1;

    if(i<= 5)
    {
        iFact *= i;
        i++; 
        Factorial();
    } 
    return iFact;
}
int main()
{
    int iRet = 0;
    iRet = Factorial();

    printf("Factorial is : %d\n",iRet);
    return 0;
}