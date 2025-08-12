// Accept N numbers from user and accept Range, Display all elements from
// that range

// Input : N : 6
// Start: 60
// End : 90
// Elements :85 66 3 76 93 88
// Output : 85 66 76 88

// Input : N : 6
// Start: 30
// End : 50
// Elements :85 66 3 76 93 88
// Output : __

#include<stdio.h>
#include<stdlib.h>

void Range( int *Arr, int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    int iIndex = 0;
    

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if( (Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd) )
        {
            printf("%d\n",Arr[iCnt]);
        }
       
    }
    
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    
    int iValue1 = 0,iValue2 = 0;

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

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    Range(iPtr,iLength,iValue1,iValue2);

   
    free(iPtr);
    return 0;

}