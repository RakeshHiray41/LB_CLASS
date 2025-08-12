#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    private:

        T *Arr ;
        int iSize;
    
    public:
    
        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor\n";

            iSize = iLength;
            Arr = new T[iSize];    
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements : \n";

            for(iCnt = 0; iCnt < iSize ;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the Array are : \n";

            for(iCnt = 0; iCnt < iSize ;iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
        T Maximum()
        {
            T iMax = 0;
            int iCnt = 0;
            iMax = Arr[0];

            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iMax)
                {
                    iMax = Arr[iCnt];
                }
            }
            return iMax;
        }
        

        

};

int main()
{   
    ArrayX <int>aobj1(5);
    
    aobj1.Accept();
    aobj1.Display();
    
    int iRet = 0;

    iRet = aobj1.Maximum();
    cout<<"Maximum is : "<<iRet<<"\n";


    ArrayX <double>aobj2(5);
    
    aobj2.Accept();
    aobj2.Display();
    
    double dRet = 0.0;

    dRet = aobj2.Maximum();
    cout<<"Maximum is : "<<dRet<<"\n";

    return 0;
}