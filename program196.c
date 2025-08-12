#include<stdio.h>

// void ReverseDisplay(char *str)
// {
//     char *strcpy = str;
//     strcpy--;
//     while(*str != '\0')
//     {
//         str++;
//     }
    
//     while(str != strcpy)
//     {
//         printf("%c",*str);
//         str--;
//     }
// }

void ReverseDisplay(char *str)
{
    int count = 0,iCnt = 0;

    while(*str != '\0')
    {
        str++;
        count++;
    }
    str--;
    for(iCnt = count ; iCnt > 0 ; iCnt--,str--)
    {
        printf("%c",*str);

    }
    printf("\n");
    
    


int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
  
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    
      
    ReverseDisplay(Arr);

    
    return 0;
}