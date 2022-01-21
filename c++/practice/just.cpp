#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
vector<int> g[N];
int visited[N];

void dfs(int vertex)
{
    cout << vertex << endl;
    visited[vertex] = 1;
    for (auto child : g[vertex])
    {
        if (visited[child])
            continue;
        dfs(child);
    }
}
int main()
{

    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    // hence graph is formed
    return 0;
}