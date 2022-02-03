#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;

int main()
{
    int a = 4, b = 6;
    cout << a << " " << b << endl;
    a = a ^ b;
    b = b ^ a; // b = b ^ ( a ^ b ) so it is a now
    a = a ^ b; // (a ^ b ) ^ a // b a me transefer ho chuka he ha ha
    // interesting
    cout << a << " " << b << endl;

    // Question
    // take xor of all
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans ^= x;
    }
    cout << ans << endl;

    return 0;
}

// swaping output
//  4 6
//  6 4

// input for Question ha ha
// 9
// 2 4 6 7 7 4 2 2 2
// 6