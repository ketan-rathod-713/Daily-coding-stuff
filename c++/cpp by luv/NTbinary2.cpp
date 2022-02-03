#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    printBinary(9);  // it will print the binary of 9
    printBinary(~9); // this is tilda operator which is used to reverse the binary string
    int a = 9;
    int i = 1; // check this bit
    if ((a & (1 << i)) != 0)
    {
        cout << "set bit" << endl;
    }
    else
    {
        cout << "not set bit" << endl;
    }

    printBinary(1 << 3);
    printBinary(~(1 << 3)); // 3rd bit pe 0
    // and iska and
    printBinary(a & (~(1 << 3))); // to unset a's 3rd bit

    // to toggle
    // ek esa num jisme ith position pe 1 and baki sab 0
    // xor toggle kar deta he
    printBinary(a ^ (1 << 2)); // second bit ko toggle

    // bit count - count set bits
    int ct = 0;
    for (int i = 32; i >= 0; i--)
    {
        if ((a & (1 << i)) != 0)
        {
            ct++;
        }
    }
    cout << ct << endl;

    cout << __builtin_popcount(a) << endl;
    // cout << __builtin_popcount(1LL << 35) << endl;
    // this only works for int
    cout << __builtin_popcountll((1LL << 35) - 1) << endl;
    // TO set first bit

    printBinary(a | (1 << 1));

    return 0;
}