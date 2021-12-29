// C++ Polymorphism
// The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms. It is a greek word. In object-oriented programming, we use 3 main concepts: inheritance, encapsulation, and polymorphism.

// Real Life Example Of Polymorphism
// Let's consider a real-life example of polymorphism. A lady behaves like a teacher in a classroom, mother or daughter in a home and customer in a market. Here, a single person is behaving differently according to the situations.

// Compile time polymorphism: The overloaded functions are invoked by matching the type and number of arguments. This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. It is achieved by function overloading and operator overloading which is also known as static binding or early binding. Now, let's consider the case where function name and prototype is same

// There are two types of polymorphism
// 1. Compile time polimorphism --{it has two types 1. Function Overloading  2. Operator Overloading }
// 2. Run time Polymmorphism ( it has one time which is 1. Virtual function )

// Compile time polymorphism: The overloaded functions are invoked by matching the type and number of arguments. This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. It is achieved by function overloading and operator overloading which is also known as static binding or early binding. Now, let's consider the case where function name and prototype is same.

// class A //  base class declaration.
// {
//     int a;

// public:
//     void display()
//     {
//         cout << "Class A ";
//     }
// };
// class B : public A //  derived class declaration.
// {
//     int b;

// public:
//     void display()
//     {
//         cout << "Class B";
//     }
// };

// In the above case, the prototype of display() function is the same in both the base and derived class.Therefore, the static binding cannot be applied.It would be great if the appropriate function is selected at the run time.This is known as run time polymorphism.

//                                                                                                                  Run time polymorphism : Run time polymorphism is achieved when the object's method is invoked at the run time instead of compile time. It is achieved by method overriding which is also known as dynamic binding or late binding.

I am enable to understand this