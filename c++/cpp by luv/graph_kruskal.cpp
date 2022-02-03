// ek graph me weights he and we want to find the tree jiske edges ka weight minimum ho
// and there are lots of algorithms there
// but lets discuss kruskal algorithm
// sari nodes ko pehle indepandent manlo
// and then sari edges ko sort karo
// and then min edge ko dalo and if usko dalne se graph nahi ban raha then use dal do ha ha
// and its all about kruskal algorithm ha ha

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
    int n, m;
    cin >> n >> m;                           // nodes and edges
    vector<pair<int, pair<int, int>>> edges; // first is weight here as we want to sort that accordingly
                                             // and second is kin do ke bich me edge he
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end());
    int total_cost = 0;
    // kya me insert kar sakta hu ya nahi vo muje check karna padega so lets see

    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    for (auto &edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (find(u) == find(v))
            continue;
        Union(u, v);
        total_cost += wt;
        cout << u << " " << v << endl;
    }
    cout << total_cost << endl;
    return 0;
}

// 6 9
// 5 4 9
// 1 4 1
// 5 1 4
// 4 3 5
// 4 2 3
// 1 2 2
// 3 2 3
// 3
// 6 8
// 2 6 7

// output
// 1 4
// 1 2
// 3 2
// 5 1
// 2 6