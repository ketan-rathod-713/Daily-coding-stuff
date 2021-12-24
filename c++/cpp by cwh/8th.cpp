// i think on this day i will learn vector and related stl things

// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
    
//      vector<int> myints;
// cout << "0. size: " << myints.size() << '\n';

//   for (int i=0; i<10; i++) myints.push_back(i);
//   cout << "1. size: " << myints.size() << '\n';

//   myints.insert (myints.end(),10,100);
//   cout << "2. size: " << myints.size() << '\n';

//   myints.pop_back();
//   cout << "3. size: " << myints.size() << '\n';
// return 0;
// }

//71  rewatch this video
// #include<iostream>
// #include<vector>
// template<class T>
// using namespace std;

// void display(vector<int> &v){
//   cout<<"displaying this ";
//     for(int i=0;i< v.size();i++){
  
//   cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }

// int main(){
//   int element,size;
//   //ways to make vector
//   vector<int> vec1; //zero legth vector

//   cout<<"enter the size of vec."<<endl;
//   cin>>size;
//   for(int i=0;i<size;i++){
  
//   cout<<"enter "<<endl;
//   cin>>element;
//   vec1.push_back(element);
//   }
//   vec1.pop_back(); //last element remove
//   display(vec1);
//   vector<int> :: iterator iter = vec1.begin();   //make iterator -- to know where to start 
//   vec1.insert(iter,5,566);
//   display(vec1);
// return 0;
// }

// vector assign hhow it is assigned by arrays
// #include <iostream>
// #include <vector>
// using namespace std;
// int main ()
// {
//   std::vector<int> first;
//   std::vector<int> second;
//   std::vector<int> third;

//   first.assign (7,100);             // 7 ints with a value of 100

//   std::vector<int>::iterator it;
//   it=first.begin()+1;

//   second.assign (it,first.end()-1); // the 5 central values of first

//   int myints[] = {1776,7,4};
//   third.assign (myints,myints+3);   // assigning from array.

//   std::cout << "Size of first: " << int (first.size()) << '\n';
//   std::cout << "Size of second: " << int (second.size()) << '\n';
//   std::cout << "Size of third: " << int (third.size()) << '\n';
//   return 0;
// }

// hackkerrank problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>vect;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        vect.push_back(value);
    }
    int p;
    cin>>p;
    vect.erase(vect.begin()+p-1);
    int pos1;
    int pos2;
    cin>>pos1>>pos2;
    vect.erase(vect.begin()+pos1-1,vect.begin()+pos2-1);
    cout<<vect.size()<<endl;
    for(int value:vect)
        cout<<value<<" ";
    return 0;
}