#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;

int main()
{
    cout << INT_MAX << endl;
    int a = (1LL << 31) - 1; // put 1LL as to avoid overflow ha ha
    cout << a << endl;
    // annd why we have taken 31 bits rather than 32 because it is signed integer lets find in unsigned integer ha ha
    unsigned int b = (1LL << 32) - 1;
    cout << b << endl;
    return 0;
}