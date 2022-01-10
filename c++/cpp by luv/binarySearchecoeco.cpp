#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e6;
long long trees[N];
int n;
long long m;

bool issufficientwood(int h)
{
    int wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] > h)
            wood += (trees[i] - h);
    }
    return wood >= m;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }

    long int high = 1e5;
    long int low = 0;
    long int mid;

    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (issufficientwood(mid))
            low = mid;
        else
            high = mid - 1;
    }

    if (issufficientwood(high))
        cout << high << endl;
    else
        cout << low << endl;

    return 0;
}