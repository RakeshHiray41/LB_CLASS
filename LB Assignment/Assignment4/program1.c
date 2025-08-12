#include<stdio.h>
int MultiFact(int iNo)
{
    int iMulti = 1,iCnt = 0;

    if( iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iMulti *= iCnt;
        }
    }
    return iMulti;

}

int main()
{   
    int iValue = 0,iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("%d\n",iRet);

    return 0;
}
//time complexity = O(n/2)