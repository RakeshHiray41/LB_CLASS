// Write a program which accept string from user and count number of
// white spaces

// Input : “MarvellouS”

// Output : 0

// Input : “MarvellouS Infosystems”

// Output : 1

// Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”

// Output : 5

#include<stdio.h>

void CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']]s",Arr);

    iRet = CountWhite(Arr);
     printf("White Space : %d\n",iRet);
    return 0;
}