#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10 ;//1
    print("%d Digit is :\n",iDigit);
    iNo = iNo / 10;
    printf("%dupdated iNo \n",iNo);

    iDigit = iNo % 10 ;//1
    print("%d Digit is :\n",iDigit);
    iNo = iNo / 10;
    printf("%dupdated iNo \n",iNo);

    iDigit = iNo % 10 ;//1
    print("%d Digit is :\n",iDigit);
    iNo = iNo / 10;
    printf("%dupdated iNo \n",iNo);

    return 0;
}