// Accept N numbers from user and return frequency of 11 form it.
// Input : N : 6

// Elements :85 66 3 15 93 88

// Output : 0
// Input : N : 6

// Elements :85 11 3 15 11 111

// Output : 2

#include<stdio.h>
#include<stdlib.h>

int  Frequency( int *Arr, int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11 )
        {
            iCount++;
        }
       
    }
    return iCount;
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    int iRet = 0;

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

    printf("Frequency of 11 is %d\n",iRet);
   

    free(iPtr);
    return 0;


}