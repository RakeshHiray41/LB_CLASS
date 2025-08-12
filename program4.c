//////////////////////////////////////////////////////////////////////
//
// File name :   program4.c
// Discription : used to Calculate percentage
// Author :      Mangesh Ashok Bedre
// Date :        28/04/2025
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter Total Marks: ");
    scanf("%d",&Total);

    printf("Enter Obatined Percentage: \n");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100; 

    printf("Percentage is : %.2f%%\n",Percentage);



    return 0 ;
}