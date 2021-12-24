//this is week 2 of 100 days of code 

//friendly functions
// #include<iostream>
// using namespace std;

// // 1 + 4i
// // 5 + 8i
// // -------
// // 6 + 12i 
// class Complex{
//     int a, b;
//     friend Complex sumComplex(Complex o1, Complex o2);
//     public:
//         void setNumber(int n1, int n2){
//             a = n1;
//             b = n2;
//         }

//         // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
//         void printNumber(){
//             cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// Complex sumComplex(Complex o1, Complex o2){
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
//     ;
//     return o3;
// }

// int main(){
//     Complex c1, c2, sum;
//     c1.setNumber(1, 4);
//     c1.printNumber();

//     c2.setNumber(5, 8);
//     c2.printNumber();

//     sum = sumComplex(c1, c2);
//     sum.printNumber();

//     return 0;
// }

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/


//constructors
// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     // Creating a Constructor
//     // Constructor is a special member function with the same name as of the class.
//     //It is used to initialize the objects of its class
//     //It is automatically invoked whenever an object is created

//     Complex(void); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
// {
//     a = 0;
//     b = 0;
//     // cout<<"Hello world";
// }

// int main()
// {
//     Complex c1, c2, c3;
//     c1.printNumber();
//     c2.printNumber();
//     c3.printNumber();

//     return 0;
// }


// /*  Characteristics of Constructors

// 1. It should be declared in the public section of the class 
// 2. They are automatically invoked whenever the object is created 
// 3. They cannot return values and do not have return types
// 4. It can have default arguments 
// 5. We cannot refer to their address

// */

// //paramaeriased constructors and default ones

// #include<iostream>
// using namespace std;


// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
//     // cout<<"Hello world";
// }

// int main(){
//     // Implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(5, 7);
//     b.printNumber();

//     return 0;
// }

//i made it to just understand the concepts but didn't worked see where is the main problem
// #include<iostream>
// #include <cmath>
// using namespace std;

// class point{
//     int a,b;
//     public:
//     int distance;
//   point(int , int);
//    friend calculate(point p1, point p2);                              //make friendly function 

  
// };

// point calculate(point p1, point p2){
//  point p3=((p2.b-p1.b)*(p2.b-p1.b))-((p2.a-p1.a)*(p2.a-p1.a));
//  cout<<"the difference is "<<sqrt(p3);
//  return 0;
// }

// point :: point(int x,int y){
//    a=x;
//    b=y;
// }

// int main(){
//     int sum;
//    point p1(1,1);
//    point p2(1,1);

   
   
   

    
// return 0;
// }


// SWETHA CHILVERI
// 11 months ago
// parameterized constructors
// #include<iostream>
// #include<math.h>
// using namespace std;
// class point{
// int x;
// int y;
// public :
//     friend void difference(point , point);
//     point(int a, int b){  // constructor is easy
//     x=a;
//     y=b;
//     }
//     void displaypoint(){
//     cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
//     }

// };
// void difference(point o1, point o2){
// int x_diff=o2.x-o1.x;
// int y_diff=o2.y-o1.y;
// double dist = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));
// cout<<"Distance is :"<<dist<<" units";
// }

// int main()
// {
// point p1(1,2),p2(4,3);
// p1.displaypoint();
// p2.displaypoint();
// cout<<endl<<endl;
// difference(p1,p2);

// return 0;
// }
 
 //constructor over loading

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(){
//         a = 0;
//         b =0;
//     }

//     Complex(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     Complex(int x){
//         a = x;
//         b = 0;
//     }

  

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };
// int main()
// {
//     Complex c1(4, 6);
//     c1.printNumber();

//     Complex c2(5);
//     c2.printNumber();

//     Complex c3;
//     c3.printNumber();
//     return 0;
// }
