// paramaterialised constructor

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    float salary;

    employee(int i, string n, float s) // this is constructor
    {
        id = i;
        name = n;
        salary = s;
    }
    void display() // this is method
    {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main()
{
    employee e1 = employee(101, "sonuu", 20000); // this is object
    employee e2 = employee(101, "sou", 20000);
    e1.display();
    e2.display();
    employee e3(101, "sooo", 20);
    e3.display();
    return 0;
}