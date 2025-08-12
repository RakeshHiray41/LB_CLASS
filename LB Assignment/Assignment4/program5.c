#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0,iSumEven = 0,iSumOdd = 0;

    if( iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSumOdd += iCnt;
        }
        else
        {
            iSumEven +=iCnt;
        }
    }
    return iSumEven-iSumOdd;

}

int main()
{   
    int iValue = 0,iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d\n",iRet);

    return 0;
}
//time complexity = O(n)