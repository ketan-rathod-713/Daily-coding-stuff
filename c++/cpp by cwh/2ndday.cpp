// hope this will be best day of mine
//after egd exam see code with harry video of c++
//c++ by code with harry 17 inline function
//compiler can ignore too inline 
// #include<iostream>
// using namespace std;

// float moneyReceived(int currentMoney,float factor=1.04){  //default arguments first write at last(right most side) not first
// return currentMoney* factor;

// }


//  inline int product(int a,int b){ //use when function k andar  na k barabar kam ho raha he
   
//  // static int c=0; //this executes once ,next time the value of c retained 
//    //c=c+1;
   
//     return a*b;//+c;  // dont use inline for static variable and for recursion
//      }

// //int stren(cost char *p ) no one can change p i nfunction used mainly for pointers and reference variable


// int main(){
//     // int a,b;
//     // cout<<"enter value of a,b";
//     // cin>>a>>b;

//  // cout<<"the product is "<<product(a,b)<<"\n";//inline function compile time pe hi speed increase 
//     // cout<<"the product is "<<product(a,b)<<"\n";
//     // cout<<"the product is "<<product(a,b)<<"\n";
//     // cout<<"the product is "<<product(a,b);

// int money=100000;

// cout<<"if you have "<<money<<"rs in your bank acc ,you will receive"<<moneyReceived(money,1.1)<<endl;

// cout<<"for vip : if ou have "<<money<<"in ac then you get"<<moneyReceived(money,1.2);
// return 0;
// }



// 18
//Recursion function calls itself
// int factorial(int n){
//    if(n<=1){
//        return 1;
//    }
// return n*factorial(n-1);

// }
// #include<iostream>
// using namespace std;
// int main(){
//     //factorial of a number
//     // n! = (n-1)!
//     int a;
//     cout<<"enter no"<<endl;
//     cin>>a;
//     cout<<"the factorial is"<<factorial(a)<<endl;

// return 0;
// }

// //fibonacci

// not able to run this code check this
// int fib(int n){
// if(n<2){
//     return 1;
// }
// return fib(n-2) + fib(n-1);
// }
 
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the number";
//     cin>>a;
//    cout<<"the ans is"<<fib(a);
// return 0;
// }

//19 function overloading
//you can make two function of same name and it will run
// int sum(int a,int b){
  
//     return a+b;
// }
// int sum(int a,int b,int c){
//     return a+b+c;
// }
// //calculate the vol of cylinder
// int volume(double r,int h){
//     return (3.14*r*r*h);
// }
// //vol of cube
// int volume(int a){
//     return a*a*a;
// }

// //rectangular box
// int volume(int l,int b,int h){
// return l*b*h;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"the vol of cuboid"<<volume(1,2,3);
//     cout<<"the vol of cylinder is"<<volume(1,2); //this is function overloading
//  cout<<"the vol of cube"<<volume(2);

// return 0;
// }

//20 oops
//classes -basic templates for ctreating object like data types
//object --basic run time entities 
//data abstraction and encapslation --wrapping data and functioin into single unit
///inheritance --properties of one class can be inherited into others. //take some properties of "animals" to "human" class //code reusability//it increases readability
//polimorphism --ability to take more than one form 
//dynamic binding--code which will execute is not known until the program run.
//message passing--Object.message(information)  call format

//21
//structure se kam nahi chal sakta =no you can access anything from structure so we need class if want to store passwords or etc 
//want to add data and make function then use class
 
 // i am not able to run this code //done write using namespace std; before all things including class too.
 #include<iostream>
using namespace std; //put this code before all functions
class Employee{
    private:
    int a,b,c;  //only functions can access it i class
    public:
    int d,e;
    void setData(int a1,int b1,int c1); //declaration
    void getData(){
        cout<<"the value of a is "<<a<<endl;
         cout<<"the value of b is "<<b<<endl;
          cout<<"the value of c is "<<c<<endl;
           cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
            
    }
}; //add semicolon

void Employee :: setData(int a1,int b1,int c1){ //this is a function in class employ
a = a1;
b = b1;
c = c1;
}


int main(){
    Employee harry;
    harry.d=34;
    harry.e=89;
   // harry.a=134;//this will throw an error as a is private 
    
     harry.setData(1,2,4);
     harry.getData();
return 0;
}
//0103288
//22 



