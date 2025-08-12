#include<stdio.h>

void Display(int iPtr[],int iSize)
{
    int iCnt = 0;
    printf("Elements from array are : \n");
    for( iCnt = 0 ;iCnt < iSize; iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }
    
    
}
int main()
{   
    int Arr[5];
    int iCnt = 0;

    printf("Enter the element : \t ");
    for( iCnt =0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr,5);

    
    
    return 0;
}