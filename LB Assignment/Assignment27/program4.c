// Write a program which accept string from user and copy small
// characters of that string into another string.

// Input : “Marvellous multi OS”

// Output : “arvellous multi”

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <='z'))
        {
            *dest = *src;
            dest++;
        }

        src++;
        
    }
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};

    StrCpyCap(Arr,Brr);
    
    printf("Copied Small are : %s\n",Brr);

    return 0;
}