//input : 4
//output : * * * *

// Start
//     iterate 1 to that frequency
//         Display *
//     continue
// stop

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo; iCnt ++)
    {
        printf("*\t");
    }
     printf("\n ");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
//O(N)
// N = natural no 
//where  N >= 0and   N <= infinity