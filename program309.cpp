#include<iostream>
using namespace std;

class ArrayX
{
    private:

        int *Arr ;
        int iSize;
    
    public:
    
        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor\n";

            iSize = iLength;
            Arr = new int[iSize];    
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
        int Maximum()
        {
            int iMax = 0,iCnt = 0;
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
    ArrayX aobj(5);
    
    aobj.Accept();
    aobj.Display();
    
    int iRet = 0;

    iRet = aobj.Maximum();
    cout<<"Maximum is : "<<iRet<<"\n";

    return 0;
}