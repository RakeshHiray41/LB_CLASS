// Accept N numbers from user and return product of all odd elements.
// Input : N : 6

// Elements :15 66 3 70 10 88

// Output : 45

// Input : N : 6

// Elements :44 66 72 70 10 88

// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Product( int *Arr, int iSize)
{
    int iCnt = 0;
    int iMulti = 1;
    

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if( (Arr[iCnt] % 2) != 0 )
        {
           iMulti = Arr[iCnt] * iMulti;
        }
        else
        {
            iMulti = 0;
        }
       
    }
    return iMulti;
    
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;
    
    int iRet = 0;

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

   

    iRet = Product(iPtr,iLength);

    printf("Result is : %d",iRet);
   
    free(iPtr);
    return 0;

}