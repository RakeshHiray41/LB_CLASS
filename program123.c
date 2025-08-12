#include<stdio.h>

int Summation(int iPtr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    printf("Elements from array are : \n");
    for( iCnt = 0 ;iCnt < iSize; iCnt++)
    {
        iSum += (*(iPtr+iCnt));
       // iSum += iPtr[iCnt];
    }
    return iSum;
    
    
}
int main()
{   
    int Arr[5];
    int iCnt = 0,iRet = 0;

    printf("Enter the element : \n ");
    for( iCnt =0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    iRet = Summation(Arr,5);
    printf("Addition is: %d\n",iRet);

    
    
    return 0;
}