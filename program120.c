#include<stdio.h>

void Display(int *iPtr,int iSize)
{
   
    printf("Elements from array are : \n");

    printf("%d\n",iPtr[0]);
    printf("%d\n",iPtr[1]);
    printf("%d\n",iPtr[2]);
    printf("%d\n",iPtr[3]);
    printf("%d\n",iPtr[4]);
}
int main()
{   
    int Arr[5];
    int iCnt = 0;

    printf("Enter the element : \n ");
    for( iCnt =0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr,5);

    
    
    return 0;
}