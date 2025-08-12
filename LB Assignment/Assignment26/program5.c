// Write a program which accept string from user reverse that string
// in place.

// Input : “abcd”

// Output : “dcba”

// Input : “abba”

// Output : “abba”


#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    
    end --;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;   

        start++;
        end--;
    }
}
int main()
{
    char Arr[20] = {'\0'};
    
    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("MOdified String is %s\n",Arr);

    return 0;
}