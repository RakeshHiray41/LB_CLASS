#include<stdlib.h>
#include<stdio.h>

int main()
{
    char *ptr = NULL;
    int iSize = 0;
    int ch  = 0;

    printf("Enter the Size : \n");

    scanf("%d",&iSize);

    ptr = (char *)malloc(sizeof(iSize));

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        
    }
}