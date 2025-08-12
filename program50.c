#include<stdio.h>

int SumDigit(int iNo)
{
   int iDigit = 0;
    int iSum = 0;
    

    while(iNo != 0)
    {   
        iDigit = iNo %10;
        iNo = iNo / 10;
        iSum += iDigit;
           
    }
    
return iSum;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

     iret = SumDigit(iValue);
     printf("Even Digit count :  %d \n",iret);
    
    return 0;
}