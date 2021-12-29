#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student
{
public:
    int id;
    string name;
};

int main()
{
    student s1;
    s1.id = 201;
    s1.name = "my name";
    cout << s1.id << " " << s1.name;
    return 0;
}