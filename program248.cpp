#include<iostream>
using namespace std;

int Addition(int No1 ,int No2)
{
    int Ans;

    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int ret;
    
    ret = Addition(10,11);

    cout<<"Addition is : "<<ret<<"\n";
    return 0;
}