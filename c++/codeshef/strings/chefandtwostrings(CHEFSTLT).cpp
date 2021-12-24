#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int max = 0;
        int min = 0;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int size = s1.size();
        for (int i = 0; i < size; i++)
        {
            if (s1[i] != s2[i] && (s1[i] == '?' || s2[i] == '?'))
            {
                max++;
            }
            else if (s1[i] == s2[i] && s1[i] == '?')
            {
                max++;
            }
            else if (s1[i] != s2[i])
            {
                max++;
                min++;
            }
        }
        cout << min << " " << max << endl;
    }

    return 0;
}