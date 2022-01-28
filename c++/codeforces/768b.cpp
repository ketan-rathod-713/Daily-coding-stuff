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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // now logic
        // start from last
        reverse(a, a + n);
        int ans = 0;
        int j = 1;
        for (int i = 1; i < n; i++)
        {

            if (a[i] == a[0] || i < j)
                continue;
            else
            {
                ans++;
                j = 2 * i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}