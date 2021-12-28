#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int par[N];

void dfs(int vertex, int parent = -1)
{
    par[vertex] = parent;

    for (int child : g[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
    }
}

vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.push_back(v);
        v = par[v];
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);

    int x, y;
    cin >> x >> y;
    vector<int> pathofx = path(x);
    vector<int> pathofy = path(y);

    int minn = min(pathofx.size(), pathofy.size());

    int lca = -1;

    for (int i = 0; i < minn; i++)
    {
        if (pathofx[i] == pathofy[i])
        {
            lca = pathofx[i];
        }
        else
        {
            break;
        }
    }

    cout << lca << endl;

    return 0;
}

// so in this most of question just we need extra things to add only
// algo - binary uplifting for log n see this
// input and output
// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 5 6
// 5 7
// 5 8
// 8 12
// 3 4
// 4 9
// 4 10
// 10 11
// 6 7
// 5