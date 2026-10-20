#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

// Derived class Cow
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow moos: Moo Moo!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Cow cow;

    // Base-class pointers
    Animal* ptr;

    ptr = &dog;
    ptr->makeSound();

    ptr = &cat;
    ptr->makeSound();

    ptr = &cow;
    ptr->makeSound();

    return 0;
}

