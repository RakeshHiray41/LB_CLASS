#include<stdio.h>

void CountCapitalSmall(char *str)
{
    int iCountSmall = 0,iCountCapital = 0;

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
        str++;
    }
    printf("small character : %d\n",iCountSmall);
    printf("Capital character : %d\n",iCountCapital);
}

int main()
{   char Arr[50]={'\0'};
   

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

     CountCapitalSmall(Arr);

    
    return 0;
}