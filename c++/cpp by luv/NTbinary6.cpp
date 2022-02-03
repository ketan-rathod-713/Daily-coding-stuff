

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

// now do bit masking
// This is O(n2)
int main()
{
    printBinary(9);
    int n;
    cin >> n;
    vector<int> masks(n, 0);
    for (int i = 0; i < n; i++)
    {
        int num_workers;
        cin >> num_workers;
        int mask = 0;
        for (int j = 0; j < num_workers; j++)
        {
            int day;
            cin >> day;
            mask = (mask | (1 << day)); // to set the bit v.imp ha ha
        }
        masks[i] = mask;
    }
    int max_days = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int intersection = (masks[i] & masks[j]);
            int commondays = __builtin_popcount(intersection);
            cout << i << " " << j << " " << commondays << endl;
            max_days = max(max_days, commondays); // also i can storej persons of that by using greater then operator in start rather then max ha ha
        }
    }
    cout << max_days << endl;

    return 0;
}

// brute force O(n2.30)

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// const int N = 1e5;
// const int INF = 1e9;
// // Question of Bit masking ha ha
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> days[N];
//     for (int i = 0; i < n; i++)
//     {
//         int num_workers;
//         cin >> num_workers;
//         for (int j = 0; j < num_workers; j++)
//         {
//             int day;
//             cin >> day;
//             days[i].push_back(day);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//              // me yaha pe intersection nikaluga and after i will find ans
//                 }
//     }
// // so total time complexity is O(npow2*30)
//     return 0;
// }