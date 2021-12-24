//i hope this day will be fanastic ... 
//watching codewith harry c++ 13

//pointer arithmatic

//adress new(p+i) = aadress current(p) + size of data type * i()

//14 
// struct make data type in which all other different thhings can you add such as int char etc
// #include<iostream>
// using namespace std;
// typedef struct employee //using typedef you can change name from struct employee to ep
// {
//     int eId;
//     char favNo;
//     float salary;
// }ep;                     //here it is written the name we want


// int main(){
//      ep harry;
//     harry.eId=465;
//     harry.favNo='c';
//     harry.salary=4566443;
//     cout<<harry.favNo<<endl;
//     cout<<harry.eId;
//     ep shubham;      //we can make thousands of name of employees
//     shubham.eId=345;
//     cout<<shubham.eId;
// return 0;
// }

//unions
// #include<iostream>
// using namespace std;

// union money  //money can be any one of this in village one of this data used 
// {                     //for better memory management
//     int rice;//4
//     char car;//1
//     float pounds;//4  
// };  //if structure then size will be 9 here its 4 as we want to use any one of this

// int main(){
//  union money m1;
//  m1.rice=45;

//  cout<<m1.rice;

    
// return 0;}

//enum
// #include<iostream>
// using namespace std;

// int main(){
//  enum meal{breakfast,lunch,dinner}; //store 0 ,1,2 value in this 
//  meal m1=breakfast;
//  meal m2=lunch;
//  cout<<m1<<endl;
// cout<<m2<<endl;
// cout<<(m1==0); //it s true sp it will print 1 else o
// return 0;}

//15 functions

//function prototypes --it tells compiler to be ready it describe about function that it will 
//take arguments and return like things

//used only if function below main
// #include<iostream>
// using namespace std;
// int sum(int a,int b){   //no need for prototype as its above main
//     int c=a+b;           //formal parameters taking values from actual parameters
//     return c;
// }

// int main(){
//     int a,b;
//     cout<<"enter two no";
//     cin>>a>>b;
//     cout<<"the sum is"<<sum(a,b);//a and  b are actual parameters 
// return 0;
// }

//call by value and call by reference


// #include<iostream>
// using namespace std;

// void swappointer(int *a,int *b){
//     int temp=*a;
//     *a=*b; //value at adrress so we can acces it anywehere
//     *b=temp;
// }

// void swapreferencevar(int &a,int &b){
// int temp=a;
// a=b;
// b=temp;
// }
// int main(){
//     int a=4;
//     int b=5;
//     //swap(a,b); //this will not swap 
//   //  swappointer(&a,&b); //if we havent passed address then nothing will happen
//   swapreferencevar(a,b);//it also uses 
//     cout<<"the value of a and b is "<<a<<" "<<b;
// return 0;
// }

//17

//start learning oops after exam

