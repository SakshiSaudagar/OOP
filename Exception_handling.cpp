#include<iostream>
using namespace std;
//Exception handling

int main()
{
    int num1,num2;
    cout<<"Enter a number"<<endl;
    cin>>num1;
    cout<<"Enter a number"<<endl;
    cin>>num2;
    
    try
       {
            if(num2==0)
            {
                throw runtime_error("Div by zero not allowed");
            }
            cout<<"Division is"<<(num1/num2)<<endl;
        }

    catch(runtime_error& e)
    {
        cout<<e.what()<<endl;
    }
    
    return 0;
}