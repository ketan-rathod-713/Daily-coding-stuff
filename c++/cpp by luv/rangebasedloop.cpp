#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}};

    for (auto &i : v) // use address for storing permanantly
    {
        cout << i.first << " " << i.second << endl;
        i = {2, 3};
    }

    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    for (int i : {1, 3, 5, 7})
    {
        cout << i << endl;
    }

        string s = "hello world";
    for (char c : "hello world")
    {
        cout << c << endl;
    }
    return 0;
}
