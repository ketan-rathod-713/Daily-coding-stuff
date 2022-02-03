// Practice Questions:
// https://www.hackerearth.com/challenge...
// https://cp-algorithms.com/data_struct... (Scroll down on link for questions)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;
int size[N];
int parent[N];

void make(int v)
{
    parent[v] = v; // as it is indepandent node
    size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]); // optimisation ha ha
}

void Union(int a, int b)
{
    a = find(a); // as i want to join root node of two groups that's why
    b = find(b);
    if (a != b)
    {
        // union by size
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    while (k--)
    {
        int u, v;
        cin >> u >> v; // invasions
        Union(u, v);
    }

    int connected_comp = 0;

    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i) // find differebt connected components ha ha
            connected_comp++;
    }
    cout << connected_comp << endl;
    return 0;
}
