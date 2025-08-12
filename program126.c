#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{   int iCnt = 0;
    printf("Entered element are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int iLength = 0,iCnt = 0;
    int *ptr = NULL;

    printf("Enter the Number of element you want :\n ");
    scanf("%d",&iLength); 

    // step : allocate the memory
    ptr =(int *) malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]); // [] subscrip operator use kelyavr nava madhe address ti concept rahatch nahi tyamule & vaprava lagto
    }
    
    //step 2 : use the memory
    
    Display(ptr,iLength);
     
    //step 3 : free the memory
    free(ptr);
    return 0;
}