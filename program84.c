

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // if(iNo < 0)
    // {
    //     iNo = -iNo;
    // }
    
    // for(iCnt = -iNo;iCnt <= iNo; iCnt++)//2n
    // {
    //     printf("%d\t",iCnt);
    // }
    

    

iCnt =10;
     for(int i = iNo ;i >= 1; i--){
        for(int j = i; j>=1; j-- )
        {   
            printf("%d\t",iCnt);
            iCnt--;
        }
        printf("\n");
     }
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
