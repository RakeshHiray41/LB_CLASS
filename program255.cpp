#include<iostream>
using namespace std;


template <class T>
T Maximum(T No1 ,T No2, T No3)
{
    
    if((No1 > No2) &&(No1 > No3))
    {
        return No1
    }
    else if((No2 > No1) &&(No2 > No3))
    {
        return No2
    }
    else
    {
        return  No3;
    }
    
}

int main()
{
    
    cout<< Maximum(10,11,21)<<"\n";
    cout<<Maximum(15.78f,20.89f,24.9f)<<"\n";
    cout<<Maximum(10.89,98.09,99.99);
    return 0;
}