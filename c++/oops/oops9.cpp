// structure in c++
#include <iostream>
using namespace std;
struct Rectangle
{
    int width, height;
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    void areaOfRectangle()
    {
        cout << "Area of Rectangle is: " << (width * height);
    }
};
int main(void)
{
    struct Rectangle rec = Rectangle(4, 6);
    rec.areaOfRectangle();
    return 0;
}

// The main difference between structure and class is

// for structure
// If access specifier is not declared explicitly, then by default access specifier will be public.
// Syntax of Structure:

// struct structure_name
// {
// // body of the structure.
// }
// The instance of the structure is known as "Structure variable".

// for class
// If access specifier is not declared explicitly, then by default access specifier will be private.
// Syntax of Class:

// class class_name
// {
// // body of the class.
// }

// The instance of the class is known as "Object of the class".