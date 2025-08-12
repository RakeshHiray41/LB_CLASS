#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{   
    int iCnt = 0, iChk = 0;

    printf("Entered element are: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(( Arr[iCnt] % 2)!=0)
        {
            iChk++;
        }
    }
    
    return iChk;
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
        scanf("%d",(&ptr[iCnt])); // [] subscript operator use nahi keli tari chalat but jara apan address change kela (ptr + iCnt) then tyacha address hoto ani free karatana problem yeu shakatat
    }
    
    //step 2 : use the memory
    
    iRet = CountOdd(ptr,iLength);
    printf(" odd Count is : %d\n",iRet);
     
    //step 3 : free the memory
    free(ptr);
    return 0;
}