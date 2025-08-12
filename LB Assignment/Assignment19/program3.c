// Accept N numbers from user check whether that numbers contains 11 in
// it or not.
// Input : N : 6

// Elements :85 66 11 80 93 88

// Output : 11 is present
// Input : N : 6

// Elements :85 66 3 80 93 88

// Output : 11 is absent

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool  Check( int *Arr, int iSize)
{
    int iCnt = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11 )
        {
            break;
        }
       
    }
    return (iCnt != iSize);
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    bool bRet = false;

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

    bRet = Check(iPtr,iLength);
    if( bRet == true)
    {
        printf("11 is Present .\n");
    }
    else 
    {
        printf("11 is Absent.\n");
    }
   

    free(iPtr);
    return 0;


}