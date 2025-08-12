#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr,int iSize)
{
    int iMax = 0;
    int iCnt = 0;
    if(Arr == NULL || iSize == 0)
    {
        printf("Invalid input");
    }

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *iPtr = NULL;
    
    int iLength = 0,iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int*)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    for(int iCnt = 0;iCnt < iLength; iCnt++)
    {
        printf("\nEnter the element : ");
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Maximum(iPtr,iLength);

    printf("Maximum number is : %d\n",iRet);
    
    
    free(iPtr);
    return 0;
}