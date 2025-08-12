//input : 4
//output : 1 2 3 4


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo;iCnt >= 1; iCnt--)
    {
        printf("%d\t*\t",iCnt);
    }
     printf("\n");

    //  for(int i = iNo ;i >= 1; i--){
    //     for(int j = i; j>=1; j-- )
    //     {
    //         printf("*\t");
    //     }
    //     printf("\n");
    //  }
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