#include<stdio.h>

int CountEvenDigit(int iNo)
{
   int iDigit = 0;
    int iCnt = 0;
    

    while(iNo != 0)
    {   
        iDigit = iNo %10;
        iNo = iNo / 10;
        if((iDigit % 2 )==0)
        {
            iCnt++;
        }
           
    }
    
return iCnt;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

     iret = CountEvenDigit(iValue);
     printf("Even Digit count :  %d \n",iret);
    
    return 0;
}