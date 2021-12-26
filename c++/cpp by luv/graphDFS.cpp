#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex)
{
    cout << vertex << endl;
    // Take action on vertex after entering the vertex
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "par:" << vertex << "  child:" << child << endl;
        // Take actions on child before entering the child node
        if (vis[child])
            continue;
        dfs(child);
        // Take action on child after exiting node
    }
    // Take action on vertex before exiting the vertex .
}

int main()
{
    int n, m;
    // taking input of graph
    cin >> n >> m; // vertices and edges
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(3);
    return 0;
}