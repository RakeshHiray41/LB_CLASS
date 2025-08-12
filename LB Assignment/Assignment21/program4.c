// Accept N numbers from user and display all such numbers which contains 3 digits in it.

// Input : N : 6

// Elements :8225 665 3 76 953 858

// Output : 3 953

#include<stdio.h>
#include<stdlib.h>


void  Digit( int *Arr, int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;

    if(Arr == NULL || iSize < 0)
    {
        printf("invalid input ");
       
    }
   
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit == 3)
            {
                printf("%d contain 3 digit\n",Arr[iCnt]);
                break;
            }
            
           
        }
        if( (iNo == 0) && (iDigit != 3))
            {
                printf("%d not contain 3 digit\n",Arr[iCnt]);
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

   

    Digit(iPtr,iLength);
   

    free(iPtr);
    return 0;


}