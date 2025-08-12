// Accept N numbers from user and accept one another number as NO ,
// return index of last occurrence of that NO.

// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : 3

// Input : N : 6
// NO: 93
// Elements :85 66 3 66 93 88
// Output : 4

// Input : N : 6
// NO: 12
// Elements :85 11 3 15 11 111
//Output : -1

#include<stdio.h>
#include<stdlib.h>

int  LastOcc( int *Arr, int iSize, int iNO)
{
    int iCnt = 0;
    int iIndex = 0;
    

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNO )
        {
            iIndex = iCnt;
        }
       
    }
    if(iCnt == iSize)
   {
    return -1;
   }
   else 
   {
    return iIndex+1;
   }
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter number  : \n");
    scanf("%d",&iValue);

    iRet = LastOcc(iPtr,iLength,iValue);

    if(iRet == -1)
    {
        printf("Their is no such number");
    }
    else 
    {
        printf("last occurance number at %d\n",iRet);
    }
   

    free(iPtr);
    return 0;

}