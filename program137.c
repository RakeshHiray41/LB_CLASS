#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int *Arr , int iSize ,int iNo)
{
    int iSerach = 0;
    int iCnt = 0;
    bool bFlag = false;
    
    if(Arr == NULL || iSize <= 0) //filter
    {
        return false;
    }

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
           break;
        }
    }
    
    return bFlag;
}
int main()
{
    int iValue = 0,iLength = 0, iCnt = 0;
    int *iPtr = NULL;
    bool bret  = false;

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

    printf("\nEnter the element you want  to serach : ");
    scanf("%d",&iValue);

    bret = Search(iPtr, iLength ,iValue);
    if(bret == true)
    {
        printf("%d is  present in array ",iValue);
    }
    else 
    {
        printf("%d is not present in ",iValue);
    }
    free(iPtr);
    return 0;
}