// In C++, static is a keyword or modifier that belongs to the type not instance. So instance is not required to access the static members. In C++, static can be field, method, constructor, class, properties, operator and event.

// Advantage of C++ static keyword
// Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory. Moreover, it belongs to the type, so it will not get memory each time when instance is created.

// C++ Static Field
// A field which is declared as static is called static field. Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory. It is shared to all the objects.

// It is used to refer the common property of all objects such as rateOfInterest in case of Account, companyName in case of Employee etc.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class account
{
public:
    int accno;
    string name;
    static float rateofinterest;

    account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }
    void display()
    {
        cout << accno << " " << name << " " << rateofinterest << endl;
    }
};

float account::rateofinterest = 6.5;

int main()
{
    account a1 = account(201, "sanjay");
    account a2 = account(202, "nakul");
    a1.display();
    a2.display();

    return 0;
}