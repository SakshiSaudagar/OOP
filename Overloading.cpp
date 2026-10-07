#include <iostream>
using namespace std;
//Operator Overloading
class Complex
{
    protected:int real,img;//Data Member
    public:
    Complex()//Default constructor
    {
        this->real=0;
        this->img=0;
    }
    Complex(int re,int ig)//Parametrized constructor
    {
       this->real=re;
       this->img=ig; 
    }
    void display()
    {
        cout<<this->real<<"+"<<this->img<<"i"<<endl;
    }
    Complex operator+ (Complex data)
    {
        Complex temp;
        temp.real=this->real+data.real;
        temp.img=this->img+data.img;
        return temp;

    }
};
int main()
{
    Complex c1(4,6);
    Complex c2(7,8);
    Complex c3=c1+c2;
    c3.display();
    cout<<"-------------------------------"<<endl;
    Complex c[5]={{5,8},{9,8}};
    cout<<"-------------------------------"<<endl;
    c[2]=c[0]+c[1];
    c[3]=c[1]+c[2];
    c[4]=c[2]+c[3]; 

    for(int i=0;i<5;i++)
        (c+i)->display();

    for(int i=0;i<5;i++)
        c[i].display();

    //Complex *ptr=&c[0];
    Complex *ptr=c;
    for(int i=0;i<5;i++)
        (ptr+i)->display();

    return 0;
}