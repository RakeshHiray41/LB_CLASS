// Accept Character from user and check whether it is digit or not (0-9).
// Input : 7
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;
    if(( '0' <= ch )&&(ch <= '9') )
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is digit !");
    }
    else
    {
        printf("It is not digit ");
    }
    return 0;
}