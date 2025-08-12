// Write a program which accept string from user and accept one
// character. Check whether that character is present in string or not.

// Input : “Marvellous Multi OS”

// e

// Output : TRUE

// Input : “Marvellous Multi OS”

// W
 
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
   
    while(*str != '\0')
    {
        if((*str == ch))
        {
            break;
        }
        str++;
    }
    return( *str != '\0');

}
int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']]s",Arr);

    printf("Enter Character : \n");
    scanf("%c",cValue);

    bRet = ChkChar(Arr,cValue);
    
    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;
}