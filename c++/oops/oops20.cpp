// An ambiguity can also occur in single inheritance.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class A
{
public:
    int a = 10;

    void display()
    {
        cout << a << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "this is class b" << endl;
    }
};

int main()
{
    B b;
    b.display();    // calling the display() function of B class .
    b.A::display(); // calling the display() function defined in B class
    return 0;
}
