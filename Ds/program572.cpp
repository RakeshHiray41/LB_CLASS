#include<iostream>

using namespace std;
class ArrayX
{

  public: 
    int *Arr;
    int iSize;

    ArrayX(int no)
    {
      iSize = no;
      Arr = new[iSize];
    }
};

int main()
{
  return 0 ;
}