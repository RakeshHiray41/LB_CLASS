#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
      
        iNo = iNo / 10;
        iCnt++;
        
    }
    
return iCnt;
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

     iret = CountDigit(iValue);
     printf("Digit count :  %d \n",iret);
    
    return 0;
}