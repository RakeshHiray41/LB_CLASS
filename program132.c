#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iSize)
{   
    int iCnt = 0;
    //bool bFlag = true;

    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] ==11)
        {
           //bFlag = true;
           break;
        }
    }
    
    //return bFlag;
    //return(icnt == isize)

    if( iCnt ==iSize)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iLength = 0,iCnt = 0;
    bool bRet = false;
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
    
    bRet = Search(ptr,iLength);
    if(bRet == true)
    {
        printf("Present");
    }
    else{
        printf("absent");

    }
     
    //step 3 : free the memory
    free(ptr);
    return 0;
}