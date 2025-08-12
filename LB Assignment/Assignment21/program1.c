// Accept N numbers from user and return the largest number.
// Input : N : 6

// Elements :85 66 3 66 93 88

// Output : 93

#include<stdio.h>
#include<stdlib.h>


int  Maximum( int *Arr, int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }
    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax )
        {
            iMax =Arr[iCnt];
        }
       
    }
    return (iMax);
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

   

    iRet = Maximum(iPtr,iLength);
    printf("LArgest Number is : %d\n",iRet);

    free(iPtr);
    return 0;


}