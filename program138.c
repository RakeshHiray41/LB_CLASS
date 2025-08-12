#include<stdio.h>
#include<stdlib.h>


int Frequency(int *Arr , int iSize ,int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    
    if(Arr == NULL || iSize <= 0) //filter
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount =iCount + 1;
        }
    }

    
    
    return iCount;
}
int main()
{
    int iValue = 0,iLength = 0, iCnt = 0,iRet = 0;
    int *iPtr = NULL;
    

    printf("Enter the number of elemnts : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if( NULL == iPtr)  
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("\nEnter the element %d: ",iCnt+1);
        scanf("%d",(iPtr + iCnt));
    }

    printf("\nEnter the element you want its freq : ");
    scanf("%d",&iValue);

    iRet = Frequency(iPtr, iLength ,iValue);
    if( iRet ==- 1)
    {
        printf("Their is issue in input ");
    }
    else
    {
        printf("%d appeared %d times \n ",iValue,iRet);
    }
    

    free(iPtr);
    return 0;
}