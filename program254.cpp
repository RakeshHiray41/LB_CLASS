#include<iostream>
using namespace std;



double Maximum(double No1 ,double No2, double No3)
{
    double Max;
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
    
    cout<< Maximum(10.89,11.98,21.2)<<"\n";
    cout<<Maximum(15,20,24.0)<<"\n";
    return 0;
}