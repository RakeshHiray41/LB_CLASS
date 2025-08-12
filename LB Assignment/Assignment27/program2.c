// Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strncpy()
// function)

// Input : “Marvellous Multi OS”

// 10

// Output : “Marvellous
#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
    if((src == NULL) || iCnt == 0)
    {
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;

        src++;
        dest++;
        iCnt--;

    }
}
int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    StrNCpyX(Arr,Brr,10);

    printf("Copied string is : %s\n",Brr);

    return 0;

}