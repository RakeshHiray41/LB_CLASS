#include<stdio.h>
// iteration
void Display(int iNo)
{   
    int iCnt = 0 ;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d : Hello\n",iCnt);
    }
    
    
}
int main()
{   int iValue = 0;

    printf("Enter the freqency : ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}