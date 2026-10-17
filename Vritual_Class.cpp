#include<iostream>
using namespace std;

//Base class
class user
{
    public:
    virtual void display()
    {
    cout<<"I'm a User"<<endl;
    }
};

//Developer inherits user virtaully
class Developer: virtual public user
{
    public:
    void display()
    {
        cout<<"I am a Developer"<<endl;
    }

};

//Base class for tainer
class Learner 
{
    public:
    void display()
    {
        cout<<"I am a Learner"<<endl;
    }

};

class Trainer: public Developer, public Learner
{
    public:
    void display() override
    {
        cout<<" I am a Trainer"<<endl;
    }

};

int main()
{
    Trainer t;

    //user pointer
    user *ptr;

    ptr = &t;

    ptr->display();

    return 0;
}