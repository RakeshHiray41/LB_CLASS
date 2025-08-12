// Accept N numbers from user and accept one another number as NO ,
// check whether NO is present or not.

// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : TRUE

// Input : N : 6
// NO: 12
// Elements :85 11 3 15 11 111
// Output : FALSE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool  Check( int *Arr, int iSize,int iNo)
{
    int iCnt = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo )
        {
            break;
        }
       
    }
    return (iCnt != iSize);
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0,iValue;
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

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = Check(iPtr,iLength,iValue);
    if( bRet == true)
    {
        printf("%d is Present .\n",iValue);
    }
    else 
    {
        printf("%d is Absent.\n",iValue);
    }
   

    free(iPtr);
    return 0;


}