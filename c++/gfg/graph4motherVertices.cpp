#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool visited[N];
string temp;

void reset()
{
    for (int i = 0; i < N; i++)
    {
        visited[i] = 0;
    }
}

void dfs(int vertex)
{
    cout << vertex << " ";
    temp += vertex;
    visited[vertex] = 1;
    for (auto child : g[vertex])
    {
        if (visited[child])
            continue;
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
    }

    for (int i = 0; i < v; i++)
    {
        reset();
        dfs(i); // now after it i have taken temp so use it before loop ends and reset it
        cout << endl;
        if (temp.length() == v)
            cout << i << " is mother vertex" << endl;
        else
            cout << i << " is Not a mother vertex" << endl;

        temp.clear();
        cout << endl;
    }

    // dfs(1); // i have to reset all above ha ha
    // hence graph is formed
    return 0;
}

// now what we will do here we will run dfs on each of them and anyone who is giving output of all vertices then it's the ans
// done ha ha
// but it is inefficiet for large graphs just visit gfg for more clarification