// Write a program which accept string from user and accept one
// character. Return index of first occurrence of that character.

// Input : “Marvellous Multi OS”

// M

// Output : 0

// Input : “Marvellous Multi OS”

// W

// Output : -1

// Input : “Marvellous Multi OS”

// e

// Output : 4

#include<stdio.h>

int FirstChar(char *str,char ch)
{
     int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iIndex++;
        str++;
    }
    if(*str != '\0')
    {
        return iIndex;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}