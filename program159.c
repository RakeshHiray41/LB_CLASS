#include<stdio.h>

int main()
{   char Arr[50]={'\0'};

    printf("Enter your Name : \n");
    scanf("%[^'\n']s",Arr);

    printf("YOur name is : %s\n",Arr);
    return 0;
}