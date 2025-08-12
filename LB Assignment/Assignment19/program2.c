// Accept N numbers from user and return difference between frequency of
// even number and odd numbers.
// Input : N : 7

// Elements :85 66 3 80 93 88 90

// Output : 1 (4 -3)

#include<stdio.h>
#include<stdlib.h>

int  Frequency( int *Arr, int iSize)
{
    int iCnt = 0, iCountEven = 0,iCountOdd = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(((Arr[iCnt] % 2)==0) )
        {
           iCountEven++;
        }
        else 
        {
            iCountOdd++;
        }
    }
    return (iCountEven -iCountOdd);
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0,iRet = 0;

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

     iRet = Frequency(iPtr,iLength);
    printf("Result is %d",iRet);

    free(iPtr);
    return 0;


}