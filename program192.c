#include<stdio.h>
#include<stdbool.h>

bool ChkCharacter(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
           break; 
        } 
        str++;

    }
    return (*str != '\0');   //(*str == ch) another condition    if-else lihun return karu shkato 

}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
   bool bRet = false;
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    
    printf("Enter the character : \n");
    scanf(" %c",&cValue);     
    
    bRet = ChkCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is not present in%s\n",cValue,Arr);
    }
    return 0;
}