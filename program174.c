#include<stdio.h>

void CountCapitalSmallDigit(char *str)
{
    int iCountSmall = 0,iCountCapital = 0,iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if( (*str >= '0')&&(*str <= '9'))
        {
            iCountDigit++;
        }
        str++;
    }
    printf("small character : %d\n",iCountSmall);
    printf("Capital character : %d\n",iCountCapital);
    printf("digit  : %d\n",iCountDigit);;
}

int main()
{   char Arr[50]={'\0'};
   

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

     CountCapitalSmallDigit(Arr);

    
    return 0;
}