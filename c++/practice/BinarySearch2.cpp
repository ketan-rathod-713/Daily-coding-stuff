#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// this is comment
const int N = 1e5;
const int INF = 1e9;

int lowerBound(vector<int> &v, int element)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid; // equal bhi ho sakta he ha ha
        }
    }
    // at last there will be two elements low and high check both and return
    if (v[lo] >= element)
        return lo;
    else
        return hi;
}
// ha ha i implemented binary search and i got to learn this hurrey lets try out something

int upper_bound(vector<int> &v, int element)
{
    int low = 0;
    int high = v.size() - 1;
    int mid;
    while (high - low > 1)
    {
        mid = (low + high) / 2;
        if (v[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    // low can be equal also
    if (v[low] != element)
        return low;

    return high;
}

void square_root(double number)
{
    double eps = 1e-6;
    double low = 1;
    double high = number;
    double mid;
    while (high - low > eps)
    {
        mid = (low + high) / 2;
        if (mid * mid < number)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << setprecision(10) << low << endl
         << high;
    // cout << high << endl;
}

int main()
{
    // int element, a, n;
    // vector<int> v;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     v.push_back(a);
    // }
    // cin >> element;
    // cout << lowerBound(v, element) << endl;
    // cout << upper_bound(v, element);
    square_root(40);
    // square_root(121);
    return 0;
}