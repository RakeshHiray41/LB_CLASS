#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;
    start = str;
    
    while(*str != '\0')
    {
        str++;
    }
    
    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
}


int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
  
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    
      
    ReverseDisplay(Arr);

    
    return 0;
}