#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int depth[N];

void dfs(int vertex, int parent = -1)
{

    for (int child : g[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);

    int max_depth = -1;
    int max_d_node;
    for (int i = 1; i <= n; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
            max_d_node = i;
        }
        depth[i] = 0; // we need to reset it as later we will find
    }

    dfs(max_d_node);

    for (int i = 1; i <= n; i++)
    {
        if (max_depth < depth[i])
        {
            max_depth = depth[i];
        }
    }
    cout << max_depth << endl;

    return 0;
}