#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
bool isLoopExists = false;

bool dfs(int vertex, int par)
{

    // Take action on vertex after entering the vertex
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "par:" << vertex << "  child:" << child << endl;
        // Take actions on child before entering the child node
        if (vis[child] && child == par)
            continue;
        if (vis[child])
            return true;
        // agar ek bhi dfs true aayega ta sab true ho jaega means ki loop exist karta he
        isLoopExists |= dfs(child, vertex); // here vertex is act like parent
                                            // Take action on child after exiting node
    }
    // Take action on vertex before exiting the vertex .
    return isLoopExists;
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

    bool isLoopExists = false;
    // we will assume that here graph is forest and it is made up of some connected components
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;
        if (dfs(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << endl;

    return 0;
}