//input : 4
//output : $$$$


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = -iNo;iCnt <= iNo; iCnt ++)
    {
        printf("$\t");
    }
     printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
//O(N)
// N = natural no 
//where  N >= 0and   N <= infinity