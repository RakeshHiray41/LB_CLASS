// Write a program which accept string from user and count number of
// capital characters.

// Input : “Marvellous Multi OS”

// Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if(*str == '\0')
    {
        return -1;

    }

    while(*str != '\0')
    {
        if((*str >= 'A') &&(*str <='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    if(iRet == -1)
    {
        printf("String is empty");
    }
    else
    {
        printf("Capital character count : %d\n",iRet);
    }
    return 0;
}