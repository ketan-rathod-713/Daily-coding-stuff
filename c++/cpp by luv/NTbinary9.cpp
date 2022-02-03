#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// this is comment
const int N = 1e5;
const int INF = 1e9;

int binExpRecur(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binExpRecur(a, b / 2);

    if (b & 1)
    {
        return a * res * 1LL * res; // write 1LL when two big numbers multiply ha ha
    }
    else
    {
        return res * res;
    }

    // Rather than this write the above one ha ha
    // if(b&1){
    //     return a*binExpRecur(a,b/2)*binExpRecur(a,b/2);
    // } else{
    //     return binExpRecur(a,b/2)*binExpRecur(a,b/2);
    // }
}

int binaryExpIterative(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        { // if last bit is 1 then
            ans *= a;
        }
        a *= a;  // each time we will keep a up to date ha ha
        b >>= 1; // and b ko right shift karte jao ha ha
    }
    return ans;
}

int main()
{
    int a = 2, b = 13;
    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    cout << ans << endl;
    cout << binExpRecur(a, b) << endl;
    cout << binaryExpIterative(a, b) << endl;
    return 0;
}
