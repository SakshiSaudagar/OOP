#include<iostream>
using namespace std;

int main()
{
    int a=11;
    int *p= &a;
    int **q= &p;
    int ***r= &q;
    int ****s= &r;

    cout<<"Value of a:"<<a<<endl;
    cout<<"Address of a:"<<&a<<endl;

    cout<<"Value of p:"<<*p<<endl;
    cout<<"Address of p:"<<&p<<endl;

    cout<<"Value of q:"<<**q<<endl;
    cout<<"Address of q:"<<&q<<endl;

    cout<<"Value of r:"<<***r<<endl;
    cout<<"Address of r:"<<&r<<endl;

    cout<<"Value of s:"<<s<<endl;
    cout<<"Address of s:"<<&s<<endl;

    return 0;
}