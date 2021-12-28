#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int depth[N], height[N];

void dfs(int vertex, int parent = 0)
{
    // first two section niche jane vale and then 2 sections piche se aane vale

    // Take action on vertex after entering the vertex

    for (int child : g[vertex])
    {

        // Take actions on child before entering the child node
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1; // here vertex is parent
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
        // Take action on child after exiting node
    }
    // Take action on vertex before exiting the vertex .
}

int main()
{
    int n, m;
    // taking input of graph
    cin >> n; // vertices and edges are n-1
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << depth[i] << " " << height[i] << endl;
    }

    return 0;
}

// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 3 4
// 5 6
// 5 7
// 5 8
// 4 9
// 4 10
// 10 11
// 0 4
// 1 3
// 1 3
// 2 2
// 2 2
// 3 0
// 3 0
// 3 1
// 3 0
// 3 1
// 4 0
// 1 0