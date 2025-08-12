#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i<= 5)
    {
        printf("Jay Ganesh...%d\n",i);

        i++;

        Display();
    }
    // else
    // {
    //     return;
    // }

    
}
int main()
{
    Display();

    return 0;
}