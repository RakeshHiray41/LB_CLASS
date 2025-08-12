// Accept N numbers from user and return difference between summation
// of even elements and summation of odd elements.

// Input : N : 6

// Elements :85 66 3 80 93 88

// Output : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Differnce( int *Arr, int iSize)
{
    int iCnt = 0,iEvenSum = 0,iOddSum = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            iEvenSum = Arr[iCnt] + iEvenSum;
        }
        else
        {
            iOddSum = Arr[iCnt] + iOddSum;
        }
    }
    return (iEvenSum - iOddSum);
}

int main()
{
    int *iPtr = NULL;
    int iRet = 0,iLength = 0,iCnt = 0;

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

    iRet = Differnce(iPtr,iLength);
    printf("Result is %d ",iRet);

    free(iPtr);
    return 0;


}