#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5;
vector<int> g[N]; // array of vectors so rows are fixed ,
bool visited[N];

void dfs(int vertex)
{
    // so here comes the first vertex now i want to traverse it's all children so
    cout << vertex << " ";
    visited[vertex] = true;
    for (auto &child : g[vertex])
    { // so let 1 has 3 childs then it will go in them from here as i will go first i will mark visited
        if (!visited[child])
            dfs(child);
        else
            continue;
    }
}

int main()
{
    // take no of vertices and edges
    int e, v;
    cin >> v >> e;

    // now take input in terms of pair of two vertices as one edge
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1); // now enter the values in the adjacency list
    }

    // Now i think representation is over and i can do dfs now

    dfs(1);
    return 0;
}

// Now it is indicator that i know the fundamentals of the graph and now i need to study the questions and solve them so lets begin ha ha
