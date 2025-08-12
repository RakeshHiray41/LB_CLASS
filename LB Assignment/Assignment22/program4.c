// Accept Character from user and check whether it is small case or not (a-z).
// Input : g
// Output : TRUE
// Input : D
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;
    if(( 'a' <= ch )&&(ch <= 'z') )
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
        printf("It is small case  character !");
    }
    else
    {
        printf("It is not small case  Character ");
    }
    return 0;
}