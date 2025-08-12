// Accept Character from user and check whether it is capital or not (A-Z).
// Input : F
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;
    if(( 'A' <= ch )&&(ch <= 'Z') )
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
        printf("It is Capital  character !");
    }
    else
    {
        printf("It is not capital  Character ");
    }
    return 0;
}