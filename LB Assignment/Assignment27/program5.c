// Write a program which 2 strings from user and concat second string
// after first string. (Implement strcat() function).

// Input : “Marvellous Infosystems”

// “Logic Building”

// Output : “Marvellous Infosystems Logic Building”

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    if((src == NULL) && (dest ==NULL))
    {
        return;
    }

    while(*src != '\0')
    {
        src++;
    }
    *src--;
    *src =' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    } 
    *src = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Infosystems";
    char Brr[30] = "Logic Building";

    StrCatX(Arr,Brr);
    
    printf("%s\n",Arr);

    return 0;
}