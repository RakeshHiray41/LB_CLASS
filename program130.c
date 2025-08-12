#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[],int iSize)
{   
    int iCnt = 0, iSumEven = 0;

    printf("Entered element are: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(( Arr[iCnt] % 2)==0)
        {
            iSumEven+=Arr[iCnt];
        }
    }
    
    return iSumEven;
}
int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
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
        scanf("%d",(ptr+iCnt)); // [] subscript operator use nahi keli tari chalat
    }
    
    //step 2 : use the memory
    
    iRet = SumEven(ptr,iLength);
    printf(" Add of Even is : %d\n",iRet);
     
    //step 3 : free the memory
    free(ptr);
    return 0;
}