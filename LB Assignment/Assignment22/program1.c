// Accept Character from user and check whether it is alphabet or not (A-Z a-z).
// Input : F
// Output : TRUE
// Input : &
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlag = false;
    if(( 'A' <= ch )&&(ch <= 'Z') ||('a' <= ch)&&(ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a character !");
    }
    else
    {
        printf("It is not a Character ");
    }
    return 0;
}