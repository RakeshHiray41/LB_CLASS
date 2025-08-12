#include<stdio.h>
#include<stdlib.h>
int SumOdd(int *Arr,int iSize)
{
    int icnt = 0;
    int iSum = 0;

    for (icnt = 0; icnt < iSize; icnt++)
    {
        if((Arr[icnt]%2)==1)
        {
            iSum = iSum + Arr[icnt];
        }
    }
    return iSum;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iRet = 0;
    

    printf("Enter the Number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter the Elements : ");

    for(int i = 0; i < iLength;i++)
    {
        scanf("%d",(ptr+i));   //
    }

    iRet = SumOdd(ptr,iLength);
    printf("Addition of Odd are :%d\n ",iRet);

    free(ptr);
    return 0;

}