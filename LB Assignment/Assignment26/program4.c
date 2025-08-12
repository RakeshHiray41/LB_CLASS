// Write a program which accept string from user and accept one
// character. Return index of last occurrence of that character.

// Input : “Marvellous Multi OS”

// M

// Output : 11

// Input : “Marvellous Multi OS”

// W

// Output : -1

// Input : “Marvellous Multi OS”

// e

// Output : 4


#include<stdio.h>

int FirstChar(char *str,char ch)
{
     int iIndex = -1,iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iIndex = iCount; 
        }
        iCount++;
        str++;
    }
    if(iIndex != -1)
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