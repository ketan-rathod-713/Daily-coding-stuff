#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5;
vector<int> g[N];
int vis[N];
int level[N];

// it help us to find the shortest path between the nodes

void bfs(int source)
{
    queue<int> q;
    q.push(source); // q me dal diya then
    vis[source] = 1;

    while (!q.empty())
    { // jab tak queue empty nahi hoti
        int current_vertex = q.front();
        cout << current_vertex << " ";
        q.pop();

        for (auto child : g[current_vertex])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n; // no of nodes
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);

    // here sari nodes ka level print kar lete he ha ha

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << level[i] << endl;
    }

    return 0;
}

// 13 1 2 1 3 1 13 2 5 5 6 5 7 5 8 8 12 3 4 4 9 4 10 10 11 9 11

// 1 0
// 2 1
// 3 1
// 4 2
// 5 2
// 6 3
// 7 3
// 8 3
// 9 3
// 10 3
// 11 4
// 12 4
// 13 1