// Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strcpy()
// function)

// Input : “Marvellous Multi OS”

// Output : “Marvellous Multi OS”    in another string


#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    if(src == NULL)
    {
        return;
    }
    while( *src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
}

int main()
{
    char Arr[20] = "Marvellous Multi Os";
    char Brr[20] = {'\0'};

    StrCpyX(Arr,Brr);

    printf("Copied string is : %s\n",Brr);
    
    return 0;
    
}