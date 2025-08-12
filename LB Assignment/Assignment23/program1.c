// Write a program which displays ASCII table. Table contains symbol,
// Decimal, Hexadecimal and Octal representation of every member from
// 0 to 255.

#include<stdio.h>
void Display(char ch)
{
    printf("%d\n",ch);
     
}
int main()
{
    char cValue = '\0'; 

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}           