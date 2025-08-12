// Write a program which accept string from user and check whether
// it contains vowels in it or not.

// Input : “marvellous”

// Output : TRUE

// Input : “Demo”

// Output : TRUE

// Input : “xyz”

// Output : FALSE

#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') ||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
        {
            break; 
        }
            
        str++;

    }
    
    return (*str != '\0');
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = ChkVowel(Arr);

    if(iRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }
    return 0;
}