// Now which question to solve may be of cycles so lets begin

// what to do
// check if cycle exist in graph or not return true or false accordingly ha ha
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool visited[N];
// first of all need to make graph ha ha and dfs
int cycle = 0;
void dfs(int vertex, int par)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (auto child : g[vertex])
    {
        if (visited[child] && child != par)
            cycle = 1;
        if (visited[child])
            continue;
        else
            dfs(child, vertex);
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
    cout << dfs << endl;
    dfs(1, 0);
    if (cycle == 1)
        cout << "cycle is there ha ha" << endl;
    else
        cout << "cycle is not there huu" << endl;
    // hence graph is done now i have to make the actual program of how cycles can be detected ha ha
    return 0;
}