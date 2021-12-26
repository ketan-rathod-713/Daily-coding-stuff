#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
vector<vector<int>> cc; // to store connected components
vector<int> currentcc;

bool vis[N];
void dfs(int vertex)
{
    currentcc.push_back(vertex);
    cout << vertex << endl;
    // Take action on vertex after entering the vertex
    vis[vertex] = true;
    for (int child : g[vertex])
    {

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
    int n, e;
    // taking input of graph
    cin >> n >> e; // vertices and edges
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        currentcc.clear(); // dfs chalane se pehle
        dfs(i);            // oh so yaha se vo value print hogi hi ha ha doubt solved
        cc.push_back(currentcc);
        ct++;
    }
    cout << cc.size() << endl;

    for (auto c_cc : cc)
    {
        for (auto vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }

    return 0;
}

// O (v+e);

// final
// 8 5
// 2 3
// 3 5
// 1
// 3
// 4
// 7
// 3
// 1 2 3 5 4
// 6 7
// 8

// yaha pe input and ans is
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7
// 1
// 2
// 3
// 5
// 4
// 6
// 7
// 8
// 3

// but i don't know how compiler predicted that there is one node of value 8
// do node should be in same order or something like that

// and then i passed this sample cases and ans is
// 4 0
// 1
// 2
// 3
// 4
// 4

// so it is predicting that the nodes are 1 2 3 4 as i haven't entered any value

// and after this i shocked too much ha ha , may be my code is wrong i interpreting wrong thing
//  4 1
// 7 8
// 1
// 2
// 3
// 4
// 4