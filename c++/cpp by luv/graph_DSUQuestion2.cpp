// jab ham group bana rahe he to hame minimum or maximum bhi store karna he aur bhi optimise way me ha ha
// sets me starting element min hota he and last max and here we will use multiset as agar tin ki value 1 he then also we want all 3 ha ha

// agar do chise mil rahi he then have a merge function

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;
int size[N];
int parent[N];
multiset<int> sizes;

void make(int v)
{
    parent[v] = v; // as it is indepandent node
    size[v] = 1;
    sizes.insert(1); // group ka size ha ha
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]); // optimisation ha ha
}

void merge(int a, int b)
{
    sizes.erase(sizes.find(size[a])); // dont erase by value ,erase by iterator
    sizes.erase(sizes.find(size[b]));
    sizes.insert(size[a] + size[b]);
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
        merge(a, b);
        size[a] += size[b];
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
        if (sizes.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int mn = *(sizes.begin());
            int mx = *(--sizes.end());
            cout << mx - mn << endl;
        }
    }

    return 0;
}
