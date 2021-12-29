// In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.
// In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. The derived class is the specialized class for the base class.

// Advantage of C++ Inheritance
// Code reusability: Now you can reuse the members of your parent class. So, there is no need to define the member again. So less code is required in the class.

// Types Of Inheritance

// C++ supports five types of inheritance:

// Single inheritance
// Multiple inheritance
// Hierarchical inheritance
// Multilevel inheritance
// Hybrid inheritance

// Derived Classes
// A Derived class is defined as the class derived from the base class.

// The Syntax of Derived class:

// class derived_class_name :: visibility-mode base_class_name
// {
//     // body of the derived class.
// } Where,

//     derived_class_name : It is the name of the derived class.

//                          visibility mode : The visibility mode specifies whether the features of the base class are publicly inherited or
//         privately inherited.It can be public or private.

//                                                 base_class_name : It is the name of the base class.

//                                                                   When the base class is privately inherited by the derived class,
//     public members of the base class becomes the private members of the derived class.Therefore, the public members of the base class are not accessible by the objects of the derived class only by the member functions of the derived class.When the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class.Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the base class.Note : In C++, the default mode of visibility is private.The private members of the base class are never inherited.

//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            c++ single inheritance

//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class account
{
public:
    float salary = 60;
};

class programmer : public account
{
public:
    float bonus = 5;
    float final = salary + bonus;
};

int main()
{
    programmer p1;
    cout << "salary is " << p1.salary << endl;
    cout << "bonus is " << p1.bonus << endl;
    cout << "final is " << p1.final << endl;
    return 0;
}