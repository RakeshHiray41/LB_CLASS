// input 4 #
// output : # # # # 

// input 5 &
// output: & & & & &

#include<stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo; iCnt++)//n
    {
        printf("%c\t",ch);
    }
    

    

   
}
int main()
{
    int iValue = 0;
    char cValue = '\0';     

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);
    printf("Enter Character: \n");
    scanf("%c",&cValue);

    printf("Accepted character is : %c",cValue);

    Display(iValue,cValue);
    
    return 0;
}
