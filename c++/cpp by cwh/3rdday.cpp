//today i will be learning some more oops concepts and try to make programs using
//oops classes and objects
// c++ initially called c++ with classes by stroustroup
// class --> extension of structure in c
//structures had limitations
//-->members are public
//-->no methods
// clases = structure + more ;
// classes can have methods and properties
// classes can make few members and as public too.
// structures in c++ are typrdef
// you can declare objects along with the class declaration;
// class employee {
//     // class definition
// } harry , rohan , lovish;
// return 0;
// }



// i am trying a simple program to understand the concepts

// #include<iostream>
// using namespace std;

// class animal{
//         public:
//         int age;
//         int height;

//         int price;

//         //methods to do something

//          void print(){
//              cout<<"the age is"<<age<<endl;
//              cout<<"the height is "<<height<<endl;
//          }

//          void privat();
// };

//  void animal :: privat(){
// cout<<"hello";
// }

// int main(){
//     animal dog;
//     dog.age= 3;
//     dog.height= 6;
//     dog.print();

//     dog.privat();
// return 0;
// }

// // C++ program to demonstrate function
// // declaration outside class

// #include <bits/stdc++.h>
// using namespace std;
// class Geeks
// {
//     public:
//     string geekname;
//     int id;

//     // printname is not defined inside class definition
//     void printname();

//     // printid is defined inside class definition
//     void printid()
//     {
//         cout << "Geek id is: " << id;
//     }
// };
// //notes from geeks for geeks
// // Definition of printname using scope resolution operator ::
// void Geeks::printname()
// {
//     cout << "Geekname is: " << geekname;
// }
// int main() {

//     Geeks obj1;
//     obj1.geekname = "xyz";
//     obj1.id=15;

//     // call printname()
//     obj1.printname();
//     cout << endl;

//     // call printid()
//     obj1.printid();
//     return 0;
// }

//as i couldnt able to understand oops so i repeated some stuff
//nesting of member function--funnction k andar dusre function ko call kar sakte he bina dot lagaye
// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
//     string s;//by default private

// public:
//     void read(void);
//     void chk_bin(void);
//     void ones(void);
//     void display(void);
// };

// void binary ::read(void)
// {
//     cout << "enter a binary number " << endl;
//     cin >> s;
// }
// void binary ::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "incorrect binary formate" << endl;
//             exit(0);
//         }
//     }
// }

// void binary::ones()
// {
//     chk_bin();           //nesting member function
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1'; //explore different functions of string
//         }
//         else
//         if (s.at(i) == '1')
//         {
//             s.at(i) = '0';
//         }
//     }
//     cout<<endl; //to go in next line
// }

// void binary ::display(void)
// {  
//     cout<<"displaying"<<endl;
//      for (int i = 0; i < s.length(); i++){
//          cout<<s.at(i);
//      }
     
// }
// int main()
// {
//     binary b;
//     b.read(); //method  to  read 
//     b.chk_bin();// check // >>if we make private then only class function can
//     b.display();
//     b.ones(); //ones compement
//     b.display();
//     return 0;
// }
//23
//memory allocation 

// #include<iostream>
// using namespace std;

// class shop{
//     int itemId[100];
//     int itemPrice[100];
//     int counter;
//     public:
//        void initCounter(void){ counter=0;}
//        void setPrice(void);
//        void displayPrice(void);
// };

// void shop :: setPrice(void){
//     cout<<"enter id of your item no "<<counter + 1 <<endl;
//     cin>>itemId[counter];
//     cout<<"enter price of your item"<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }

// void shop ::displayPrice(void){
//     for(int i=0; i<counter;i++){
//         cout<<"the price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
        
//     }
// }


// int main(){
//     shop myshop;
//     myshop.initCounter();
//     myshop.setPrice();
//     myshop.setPrice();    //also u can make loop
//     myshop.setPrice();
//     myshop.displayPrice();
// return 0;
// }

