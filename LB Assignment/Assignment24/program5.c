// Write a program which accept string from user and display it inn
// reverse order.

// Input : “MarvellouS”

// Output : “SuollevraM”
#include<stdio.h>
void DisplayReverse(char *str)
{   
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    str--;
    while( iCnt >= 0)
    {
        printf("%c",*str);
        str--;
        iCnt--;
    }
    
}
int main()
{
    char Arr[20] = {'\0'};
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    DisplayReverse(Arr);

    return 0;
}