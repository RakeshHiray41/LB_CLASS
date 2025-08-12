/* 
    Start
        Accept percentage from user
        if percentage is less than 0 and greatre than 100 then display invlid input
        if percentage is greater than 0 and less than 35 diplay fail
        if percentage is grater than 35 and less than 50 display pass class
        if percentage is greater than 50 and less than 60 diplay second class
        if percentage is greater than 60 and less than 70 display first class
        if percentage is greater than 70 and less than 100 display first with distinction class
    stop
*/
#include<stdio.h>
void DisplyaClass(float fPerc)
{
    if((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("Unable to proceed as input is invalid\n");
        return;
    }
    if((fPerc >= 0.0f) && (fPerc < 35.0f))
    {
        printf("Your are fail");
    }
    else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass class");
    }
    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("Second class");
    }
    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("First class");
    }
    else if((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("First class with distinction");
    }

}


int main()
{
    float fValue = 0.0f;
    
    printf("Enter your Percentage: \n");
    scanf("%f",&fValue);
    DisplyaClass(fValue);

    return 0;
}