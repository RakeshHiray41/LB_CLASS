#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr,int iSize)
{
    int iMin = 0;
    int iCnt = 0;
    if(Arr == NULL || iSize == 0)
    {
        printf("Invalid input");
    }

    iMin = Arr[0];
    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        
        {
            iMin = Arr[iCnt];
        }
    }
  
    return iMin;
}

int main()
{
    int *iPtr = NULL;
    
    int iLength = 0,iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int*)malloc(iLength * sizeof(int));

    for(int iCnt = 0;iCnt < iLength; iCnt++)
    {
        printf("\nEnter the element : ");
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Minimum(iPtr,iLength);

   
    printf("\nMinimum number is : %d\n",iRet);
    
    
    free(iPtr);
    return 0;
}




