// initialising and displaying data through methods
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student
{
public:
    int id;
    string name;

    void insert(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout << id << " " << name << endl;
    }
};

int main()
{
    student s1;
    student s2;
    s1.insert(201, "sonu");
    s2.insert(202, "nakul");
    s1.display();
    s2.display();
    return 0;
}