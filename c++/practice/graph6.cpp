#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// In this I am going to practice BFS a little more
// shortest path by BFS find
// so exactly what i need to do so first do bfs and print levels of each and then find what to do

const int N = 1e5;
const int INF = 1e8;
vector<int> g[N];
bool visited[N];
int level[N];

void reset()
{
    for (int i = 0; i < N; i++)
    {
        level[i] = INF;
        visited[i] = 0;
    }
}

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    level[source] = 0;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        for (auto child : g[curr])
        {
            if (level[curr] + 1 < level[child])
            {
                q.push(child);
                level[child] = min(level[child], level[curr] + 1); // may be due to some node the level may be less
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

    // so now call bfs ha ha
    reset();
    bfs(1);

    for (int i = 1; i <= v; i++)
    {
        cout << level[i] << endl;
    }

    // let i have to find the shortest distance then what will i do ha ha

    return 0;
}