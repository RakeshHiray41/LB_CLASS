// Write a program which accept string from user and convert it into
// lower case.

// Input : “Marvellous Multi OS”

// Output : marvellous multi os

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified String is %s",Arr);

    return 0;
}