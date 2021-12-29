// example of function which is friendly to two functions

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class B; // forward declaration

class A
{
    int x;

public:
    void setdata(int i)
    {
        x = i;
    }

    friend void min(A, B); // friend function
};

class B
{
    int y;

public:
    void setdata(int i)
    {
        y = i;
    }

    friend void min(A, B); // friend function
};

void min(A a, B b)
{
    if (a.x <= b.y)
    {
        cout << a.x << endl;
    }
    else
    {
        cout << b.y << endl;
    }
}

int main()
{
    A x;
    B y;
    x.setdata(10);
    y.setdata(20);
    min(x, y);
    return 0;
}

// so friend function can access the private memebers of both the classes ha ha