// #include<iostream>
// using namespace std;


// int main(){
//   int a,b;
//   cout<<"Enter the number","\n";
//   cout<<endl;
//   cin>>a; //12
//   cout<<"Table of "<<a<<endl;
// for(int i=1;i<=10;i++){

//     b=a*i;
//     cout<<" "<<a<<" * "<<i<<" = "<<b<<"\n";
// }

// return 0;
// }

// #include<iostream>
// using namespace std;
// class human{
//     public:
//       int age,school;
//       string name;
  


// };

// int main(){
//     human hiten;
//     hiten.age = 16;
//     hiten.school=10;
//     hiten.name ="Hiten";
//     cout<<hiten.age;
// return 0;
//
#include<iostream>
using namespace std;
class employee{
    public:
    int salary,age;
    char favno;
    int mob;
    void getdata(void);
};

void employee :: getdata(){
    cin>>salary>>age>>favno>>mob;
    cout<<"your welcome";
}

int main(){
    cout<<"enter salary age favno mob ";
    employee harry;
  harry.getdata();

return 0;
}