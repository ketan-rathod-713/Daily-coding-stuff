#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1); // right side khisakte jao and dekho ki kya 1 ke sath and me 1 aa raha he ya 0 whatever be is our ans
        // because a & 1 = a // this is imp property to remmember ha ha
    }
}

bool checkoddeven(int num)
{
    if ((num)&1)
        return true; // number is odd
    else
        return false; // number is even ha ha
}

int main()
{
    printBinary(9);
    // check if given number is odd or even
    // first bit check
    // 1 ke sath and 0 then even else odd
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        printBinary(i);
        cout << " " << checkoddeven(i) << endl;
    }

    return 0;
}