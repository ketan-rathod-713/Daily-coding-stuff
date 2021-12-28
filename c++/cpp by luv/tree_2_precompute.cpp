#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];

int subtree_sum[N];
int even_count[N];
// dfs for tree

void dfs(int vertex, int parent = 0)
{
    cout << vertex << endl;
    if (vertex % 2 == 0)
        even_count[vertex]++;
    subtree_sum[vertex] += vertex; // sum me uski khud ki value bhi add karni he
    for (int child : g[vertex])
    {
        if (child == parent)
            continue; // child of 2 is 5 and 1 , but 1 is root node so we will not go there ha ha
        // child me jane se pehle

        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
        even_count[vertex] += even_count[child];
        // after child ends
    }
    // after vertex
}

int main()
{
    int n; // for tree no of vertices n and edges is n-1
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1); // if root is 1 then
    // for simplycity we will print all values
    for (int i = 1; i <= n; i++)
    {
        cout << subtree_sum[i] << " " << even_count[i] << endl;
    }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int v;
    //     cin >> v;
    //     cout << subtree_sum[v] << " " << even_count[v] << endl;
    //

    return 0;
}

// Output and input
// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 3 4
// 5 6
// 5 7
// 5 8
// 8 12
// 4 9
// 4 10
// 10 11
// 91 6
// 40 4
// 37 2
// 34 2
// 38 3
// 6 1
// 7 0
// 20 2
// 9 0
// 21 1
// 11 0
// 12 1
// 13 0