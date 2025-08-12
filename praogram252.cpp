#include<iostream>
using namespace std;

template <class T>

T Addition(T No1 ,T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    
    cout<< Addition(10,11)<<"\n";
    cout<< Addition(10.89f,11.90f)<<"\n";
    cout<< Addition(10.78,11.89)<<"\n";

    
    return 0;
}