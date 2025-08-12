#include<iostream>
using namespace std;

class ArrayX
{
    private:

        float *Arr ;
        int iSize;
    
    public:
    
        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor\n";

            iSize = iLength;
            Arr = new float[iSize];    
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
        float Maximum()
        {
            float iMax = 0.0f;
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
    ArrayX aobj(5);
    
    aobj.Accept();
    aobj.Display();
    
    float iRet = 0.0f;

    iRet = aobj.Maximum();
    cout<<"Maximum is : "<<iRet<<"\n";

    return 0;
}