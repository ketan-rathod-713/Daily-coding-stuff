// This is my 4th day of 100daycode i feel very good by this consistancy
//24
//count is the static data member
// #include <iostream>
// using namespace std;

// class employee
// {

//     int id;
//     static int count;

// public:
//     void setdata(void)
//     {
//         cout << "enter the id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getdata(void)
//     {
//         cout << "the id is" << id << "and this is employee no" << count << endl;
//     }
//     static void getcount(void)
//     {
//         cout << "the  value of count is " << count << endl;
//     }
// };

// int employee::count; //static sirf ek bar memory leta he and update hota rahata he ,default value is 0
//                      //try this program without using static
//                      //static -- class variable
//                      //static ko sare objects share karte he
// int main()
// {
//     employee harry, rohan, lovish;

//     //harry.id = 1 //can not do this ass private
//     harry.setdata();
//     harry.getdata();
//     employee::getcount(); //this is static function which can be accessed by class name
//     rohan.setdata();
//     rohan.getdata();
//     employee::getcount(); //it can only take static variable or static function
//     lovish.setdata(); 
//     lovish.getdata();
//     employee::getcount();

//     return 0;
// } 

#include<iostream>
using namespace std;
class employee{
    int id;
    int salary=122;
    public:
    void setid(void){
        cout<<"enter the id of employee";
        cin>>id;
    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
}

int main(){
    employee harry,rohan , lovish, shruti;
    harry.setid();
    harry.getid();
return 0;
}