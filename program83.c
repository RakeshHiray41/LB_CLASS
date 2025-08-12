

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = -iNo;iCnt <= 0; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    

    iCnt = 0;

    for(iCnt =1 ;iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }


    //  for(int i = iNo ;i >= 1; i--){
    //     for(int j = i; j>=1; j-- )
    //     {
    //         printf("%d\t",j);
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
//O(2N)
// N = natural no 
//where  N >= 0and   N <= infinity