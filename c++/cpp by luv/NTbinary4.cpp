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
    cout << endl;
}
int main()
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i << endl;
        printBinary(int(i));
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << i << endl;
        printBinary(int(i));
    }

    // upper case me 5th bit set nahi hoti and small me 5th bit sset hoti he

    char c = 'A';
    char d = c | (1 << 5); // yaha pe set kiys
    cout << d << endl;

    // a to A so do unset
    cout << char(d & (~(1 << 5))) << endl;
    cout << char(1 << 5) << endl; // it is space ha ha

    // Now isse bhi cool thing is
    cout << char('C' | ' ') << endl;

    // c to C
    // as space ka invert bahut bada ho jaega and jo ki asci ke bahar chala jaega so we dont use that
    // instead of that think about binary of underscore ha ha
    printBinary(int('_'));
    cout << char('c' & '_') << endl;

    // so upper case conversion
    cout << char('B' | ' ') << endl;
    // for lowercase
    cout << char('b' & '_') << endl;
    return 0;
}