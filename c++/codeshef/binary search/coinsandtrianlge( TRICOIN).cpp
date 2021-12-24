// solve this question for n=1e9 and so oon

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int k = 1e4;
int prefixsum[k];

int main()
{
    prefixsum[0] = 0;
    for (int i = 1; i < k; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *ptr = upper_bound(prefixsum, prefixsum + k, n);
        // cout << (*ptr) << endl;
        int j = 1;
        int l = 0;
        int nextindex;
        while (j)
        {
            if (prefixsum[l] == (*ptr))
            {
                j = 0;
                nextindex = l;
            }
            l++;
        }
        cout << l - 2 << endl;
    }
    return 0;
}