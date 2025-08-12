#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int *Arr , int iSize ,int iNo)
{
    int iSerach = 0;
    int iCnt = 0;
    
    if(Arr == NULL || iSize <= 0) //filter
    {
        return false;
    }

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }
    
    if(iCnt == iSize)
    {
        return false; // Not found
    }
    else
    {
        return true; // Found
    }
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
    
    printf("Enter the element : ");

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",(iPtr + iCnt));
    }

    printf("Enter the element you want  to serach : ");
    scanf("%d",&iValue);

    bret = Search(iPtr, iLength ,iValue);
    if(bret == true)
    {
        printf("%d is  present in array ",iValue);
    }
    else 
    {
        printf("%d is not present in ");
    }
    free(iPtr);
    return 0;
}