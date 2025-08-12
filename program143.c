#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int *Arr,int iSize)
{
    int iMax = 0,iMin = 0;
    int iCnt = 0;
    if(Arr == NULL || iSize == 0)
    {
       printf("Invalid input");

    }
    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    } 
    
    printf("\nMaximum element is : %d\n",iMax);
    printf("\nMinimum element is : %d\n",iMin);
   
    
}

int main()
{
    int *iPtr = NULL;
    
    int iLength = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    iPtr = (int*)malloc(iLength * sizeof(int));

    for(int iCnt = 0;iCnt < iLength; iCnt++)
    {
        printf("\nEnter the element : ");
        scanf("%d",&iPtr[iCnt]);
    }

    MaximumMinimum(iPtr,iLength);
    
    free(iPtr);
    return 0;
}




