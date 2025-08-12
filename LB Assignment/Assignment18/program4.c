// Accept N numbers from user and display all such elements which are
// divisible by 3 and 5.

// Input : N : 6

// Elements :85 66 3 15 93 88

// Output : 15

#include<stdio.h>
#include<stdlib.h>

void Display( int *Arr, int iSize)
{
    int iCnt = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(((Arr[iCnt] % 3)==0) && ((Arr[iCnt] % 5)==0))
        {
            printf("\n%d",Arr[iCnt]);
        }
    }
  
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iCnt = 0;

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

    Display(iPtr,iLength);
    

    free(iPtr);
    return 0;


}