#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// this is comment
const int N = 1e5;
const int INF = 1e9;

// what will be time complexity
//  log(n) worst case , but if a and b are large then it may be less
int gcd(int a, int b)
{ // a is dividend and b is divisor
    // a%b is remainder
    if (b == 0)   //   here we can place a%b and then return b
        return a; // as b is devisor ha ha
    return gcd(b, a % b);
}

int main()
{
    cout << gcd(4, 12) << endl;
    cout << gcd(12, 18) << endl;           // no worries if a is small
    cout << 12 * 18 / gcd(12, 18) << endl; // lcm ha ha
    cout << __gcd(12, 18) << endl;

    // for gcd of 3 number
    cout << gcd(gcd(12, 18), 3) << endl;

    // when we have to find the minimum fraction
    // 12/18 is 2/3 , divide both by gcd ha ha
    return 0;
}