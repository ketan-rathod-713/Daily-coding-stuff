// Ambiquity in inheritance
// when the names of functions is same in multiple classse
// Ambiguity can be occurred in using the multiple inheritance when a function with the same name occurs in more than one base class

// Here the output will be
// error: reference to 'display' is ambiguous
// display();

#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};
class B
{
public:
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};
// class C : public A, public B
// {
//     void view()
//     {
//         display();
//     }
// };

// so rather then this we should use below programm

class C : public A, public B
{

public:
    void view()
    {
        A ::display(); // Calling the display() function of class A.
        B ::display(); // Calling the display() function of class B.
    }
};

int main()
{
    C c;
    c.view();
    return 0;
}
