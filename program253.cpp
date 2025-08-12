#include<iostream>
using namespace std;



int Maximum(int No1 ,int No2, int No3)
{
    int Max;
    if((No1 > No2) &&(No1 > No3))
    {
        Max = No1;
    }
    else if((No2 > No1) &&(No2 > No3))
    {
        Max = No2;
    }
    else
    {
        Max = No3;
    }

    return Max;

}

int main()
{
    
    cout<< Maximum(10,11,21)<<"\n";
    cout<<Maximum(15,20,24)<<"\n";
    return 0;
}