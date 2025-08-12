// Accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 4 iCol = 4
// Output : 
//             1 2 3 4
//               2 3 4
//                 3 4
//                   4

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;

    for(i = 1; i<= iRow; i++)
    {
        for(j = 1 ; j <= iCol; j++)
        {
           if( j >= i)
           {
                printf("%d\t",j);
           }
           else
           {
                printf("\t");
           }
           
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}