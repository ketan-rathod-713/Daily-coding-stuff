
// In this we will do BFS ha ha so lets do it
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool visited[N];
int level[N];

void BFS(int vertex)
{

    queue<int> q;
    q.push(vertex);
    visited[vertex] = true;
    while (!q.empty())
    {
        int current_v = q.front();
        cout << current_v << " ";
        cout << level[current_v] << endl;
        q.pop();
        for (auto child : g[current_v])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = 1;
                level[child] = level[current_v] + 1;
            }
        }
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
    // so now the graph is formed lets do the real problem that is BFS ha ha
    BFS(1);

    // now print the level of each so i think done inside function hence bfs complete hurrey now do bfs simply for tree ha ha may
    return 0;
}

// its done ha ha