// what could be the first question to do on the graph , i think first solve all questions of the luv and then go for others

// Questiions to solve

// 1. cycles
// 2. connected components
// 3. shortest path
// 4. flood fill questionn
// 5. tree DFS
// 6. tree LCA lowest common ancestor
// 7. and then go for other videos of cpp by luv ha ha

// cpp by luv sequence ha ha after this questions
//  heeight and depth of tree
//  precomputation using dfs
//  find diameter of tree
//  edge deletion question using dfs
//  bfs
//  find shortest path using bfs

// here i am going to solve the question of connected components

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5;
vector<int> g[N];
bool visited[N];
vector<vector<int>> finalans; // vector of all connected components
vector<int> cc;               // connected componenets

void dfs(int vertex)
{

    visited[vertex] = true;
    cc.push_back(vertex);
    for (auto child : g[vertex])
    {
        if (visited[child])
            continue;
        else
            dfs(child);
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

    // here i want to know the connected components so what i need to do
    // let 1 i will run dfs on 1 so i will get all the values and if doing by 2 i get same then continue else count it
    int ct = 0;
    for (int i = 1; i <= v; i++)
    {
        if (visited[i]) // idk but here something is wrong
            continue;
        cc.clear();
        dfs(i);
        finalans.push_back(cc);
        ct++;
    }
    cout << ct << endl; // now i have got it but i also want to print it in separate form and store it ha ha

    // how to print all values of vectors

    for (auto i : finalans)
    {
        for (auto vertex : i)
        { // here i is vector ha ha
            cout << vertex << " ";
        }
        cout << endl;
    }

    return 0;
}

// 10 8
// 1 4
// 1 3
// 1 2
// 2 5
// 3 5
// 6 7
// 8 9
// 8 10
// 3
// 1 4 3 5 2
// 6 7
// 8 9 10
