#include <iostream>
using namespace std;
#include<string>

class employee;
 class employee{
     public:
     string name;
     int salary;
 };
int main(){
//learning c++

//     cout<<"hello world";
//     string name="harrry";
//     cout<<"my name is" <<name;
// float score = 76.4;
// cout<<score;
// int const co=34;
// cout<<co;
// }
// cout<<"hello i used it by alt"<<endl;
// cout<<"hello i used it by alt"<<endl;
// cout<<"hello i used it by alt"<<endl;
// cout<<"hello i used it by alt"<<endl;

// int a,b;
// cout<<"enter one number"<<endl;
// cin>>a;
// cout<<"enter second number"<<endl;
// cin>>b;
// cout<<"the sum is "<<a+b;

// int age;
// cin>>age;
// if(age>18 || age<5){// or && for and
//     cout<<"you can vote";
// }

// int ar[3] = {1,2,3};
// cout<<ar[0];
// int marks[6];

// for (int i = 0; i < 6; i++)
// {
//     cout<<"enter the marks of "<<i<<"th student";
//     cin<<marks[i];
// }
// cout<<"just ";
// int arr2d[2][3] = {
//     {1,2,3},
//     {4,5,6}
// };
// for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cout<<"the value at"<<i<< "and"<<j<<"is "<<arr2d[i][j]<<endl;
//     }
    
// }

// int a=344;
// cout<<(float)a/5; //type casting similarly float to int

// string name = "harry";
// cout<<name.length()<<endl;  //for string and some functions
// cout<<name.substr(1,4);

//pointer

// int a,*p;
// p =&a;
// a =45;
// cout<"value at p"<<*p<<;

//oops  not working
//  employee har;
// har.name="harry";
// har.salary=100;
// cout<<"the name of first employee is "<<har.name<<"and his salary is "<<har.salary;

employee har;
har.name="harry";
har.salary=200;
har.printdetails();
 }
void printdetails(){
    using employee;
    cout<<"the name of the employee is "<<this->name<<"and his salary is "<<this->salary<<endl;
}