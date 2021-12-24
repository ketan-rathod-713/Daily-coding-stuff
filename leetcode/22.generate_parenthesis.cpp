#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<string> str;

void generateParanthesis(string &s,int open,int close){

    if(open ==0 & close ==0){
        str.push_back(s);
        return;
    }

    if(open>0){
        s.push_back('(');
        generateParanthesis(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(open < close){
            s.push_back(')');
            generateParanthesis(s,open,close-1);
            s.pop_back();
        }
    }
}

int main(){
    int n;
    string s;
    cin>>n;
    generateParanthesis(s,n,n);
    for(int i=0;i<str.size();i++){
        cout<<"\""<<str[i]<<"\",";
    }
    cout<<"]";
return 0;
}