// multiple inheritance
// Multiple inheritance is the process of deriving a new class that inherits the attributes from two or more classes.

// write two or more class after ':' comma separated

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << a + b << endl;
    }
};

int main()
{
    C c;
    c.get_a(20);
    // c.get_b(30);
    c.display();
    return 0;
}