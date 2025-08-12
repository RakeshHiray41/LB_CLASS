#include<iostream>
using namespace std;

// call by address 
void Swap( int *No1, int *No2)
{
    int temp = 0;

    temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}

int main()
{   
    int a = 10, b = 11;

    Swap(&a,&b);

    cout<<"value of a : "<<a<<"\n";
    cout<<"value of b : "<<b<<"\n";
    
    return 0;
}