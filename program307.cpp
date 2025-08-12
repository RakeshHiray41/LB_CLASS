#include<iostream>
using namespace std;

class ArrayX
{
    public:

        int *Arr ;
        int iSize;
    

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
        

        

};



int main()
{   
    ArrayX aobj(5);
    
    aobj.Arr = NULL;
    aobj.iSize = 15;
    
    aobj.Accept();
    aobj.Display();

    return 0;
}