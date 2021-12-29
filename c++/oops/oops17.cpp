// Multilevel inheritance is a process of deriving a class from another derived class.

// When one class inherits another class which is further inherited by another class, it is known as multi level inheritance in C++. Inheritance is transitive so the last derived class acquires all the members of all its base classes.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class animal
{
public:
    void eat()
    {
        cout << "eating.." << endl;
    }
};

class dog : public animal
{
public:
    void bark()
    {
        cout << "barking.." << endl;
    }
};

class babydog : public dog
{
public:
    void weep()
    {
        cout << "weeping.." << endl;
    }
};

int main()
{
    babydog d1;
    d1.eat();
    d1.bark();
    d1.weep();
    return 0;
}