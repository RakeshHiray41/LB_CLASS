#include<iostream>
using namespace std;
 
template<class T>

void Swap( T &No1, T &No2)
{
    T temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{   
    int a = 10, b = 11;
    cout<<"value of a before swap : "<<a<<"\n";
    cout<<"value of b before swap : "<<b<<"\n\n";
    Swap(a,b);
    cout<<"value of a after swap : "<<a<<"\n";
    cout<<"value of b after swap : "<<b<<"\n\n";

    char x = 'A',y = 'Z';
    cout<<"value of x before swap: "<<x<<"\n";
    cout<<"value of y before swap: "<<y<<"\n\n";
    Swap(x,y);
    cout<<"value of x after swap: "<<x<<"\n";
    cout<<"value of y after swap: "<<y<<"\n";
    
    return 0;
}