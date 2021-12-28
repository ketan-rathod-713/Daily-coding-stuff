#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
bool isLoopExists = false;

bool dfs(int i, int j, int initialColor, int newColor, vector<vector<int>> &image)
{
    // agar muje 4 directiom me jana he then
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0)
        return;
    if (i >= n || j >= m)
        return;

    if ((image[i][j]) != initialColor)
        return; // invalid ko pehle hi return kardo
    image[i][j] = newColor;

    // either ypu can write different condition for all but just write above stuff to exclude the remaining values of i and j that we don't want

    dfs(i - 1, j, initialColor, newColor, image);
    dfs(i + 1, j, initialColor, newColor, image);
    dfs(i, j - 1, initialColor, newColor, image);
    dfs(i, j + 1, initialColor, newColor, image);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initialColor = image[sr][sc];
    if (initialColor != newColor)
        dfs(sr, sc, initialColor, newColor, image);
}

int main()
{
    int n, m;
    // taking input of graph
    cin >> n >> m; // vertices and edges
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    return 0;
}