// Accept N numbers from user and display summation of digits of each number.

// Input : N : 6

// Elements :8225 665 3 76 953 858

// Output : 17 17 3 13 17 

#include<stdio.h>
#include<stdlib.h>


void  DigitSum( int *Arr, int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;
    int iSum = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }
   
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {   
        iSum = 0;
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("Summation of digits are : %d\n",iSum);
        
    }
    
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
   

    printf("Enter Number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory ! ");
        return -1;
    }

    printf("\nEnter the %d elements  \n",iLength);

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        printf("Enter the element %d : \n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

   

    DigitSum(iPtr,iLength);
   

    free(iPtr);
    return 0;


}