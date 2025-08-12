//O(n + n/2)

#include<stdio.h>
void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    end = str;
    start = str;

    while(*end != '\0')
    {
        end++;
        
    }
    end--;
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
    char Arr[50] = {'\0'};
    char cValue = '\0';
  
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    strrevX(Arr);
    printf("String after reversal: %s\n",Arr);
    
    return 0;
}