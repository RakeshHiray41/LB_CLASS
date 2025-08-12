//O(n + n/2)

#include<stdio.h>
#include<stdbool.h>

bool ChkPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;
    end = str;
    start = str;

    while(*end != '\0')
    {
        end++;
        
    }
    end--;
    while(start < end)
    {
        if(*start != *end)
        {
            bFlag = false;
            break;
        }
        start++;
        end--;
    }
    return bFlag;
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;
  
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    bRet = ChkPallindrome(Arr);
    
    if( bRet == true)
    {
        printf("Striing is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }
    
    return 0;
}