// Write a program which accept string from user and return
// difference between frequency of small characters and frequency of
// capital characters.

// Input : “MarvellouS”

// Output : 6 (8-2)

#include<stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0,iCntCap = 0;


    if(*str == '\0')
    {
        return -1;

    }

    while(*str != '\0')
    {
        if((*str >= 'a') &&(*str <='z'))
        {
            iCntSmall++;
        }
        else if((*str >= 'A') &&(*str<='Z'))
        {
            iCntCap++;
        }
        str++;
    }
    return (iCntSmall - iCntCap);
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    if(iRet == -1)
    {
        printf("String is empty");
    }
    else
    {
        printf("Difference : %d\n",iRet);
    }
    return 0;
}