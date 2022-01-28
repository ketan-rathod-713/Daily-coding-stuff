#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // now logic
        int mxa = 0, mxb = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                swap(a[i], b[i]);
            }
            mxa = max(mxa, a[i]);
            mxb = max(mxb, b[i]);
        }
        // now a is small and b is big so find max of each ha ha
        cout << mxa * mxb << endl;
    }

    return 0;
}