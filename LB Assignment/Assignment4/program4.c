#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0,iSum = 0;

    if( iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum += iCnt;
        }
    }
    return iSum;

}

int main()
{   
    int iValue = 0,iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n",iRet);

    return 0;
}
//time complexity = O(n)