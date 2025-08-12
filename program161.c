#include<stdio.h>
// ha synatx madhe str chnge hotiy ani function samptana str 104 hoty
void Display(char str[])
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
}
int main()
{   char Arr[50]={'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}