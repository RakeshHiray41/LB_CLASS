// Write a program which accept string from user and copy capital
// characters of that string into another string.

// Input : “Marvellous Multi OS”

// Output : “MMOS”

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <='Z'))
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
    
    printf("Copied Capitals are : %s\n",Brr);

    return 0;
}