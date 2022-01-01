#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 1e5;
vector<int> g[N];
const int INF = 1e9;
// it finds the shortest path between the root and the node
int vis[8][8];
int level[8][8];

int getX(string s)
{
    return s[0] - 'a';
}
int getY(string s)
{
    return s[1] - '1';
}

bool isvalid(int x, int y)
{
    return x < 8 && y < 8 && x >= 0 && y >= 0;
}

vector<pair<int, int>> movements = {
    {-1, 2},
    {1, 2},
    {-1, -2},
    {1, -2},
    {2, -1},
    {2, 1},
    {-2, -1},
    {-2, 1}};

int bfs(string source, string dest)
{
    int sx = getX(source);
    int sy = getX(source);
    int dx = getY(dest);
    int dy = getY(dest);
    queue<pair<int, int>> q;

    q.push({sx, sy});
    vis[sx][sy] = 1;
    level[sx][sy] = 0; // taki infinity ki jagah pe ye aaye

    while (!q.empty())
    {
        pair<int, int> current_v = q.front();
        int x = current_v.first, y = current_v.second;
        q.pop();

        // then go to all childs that we want to go
        //  q.push({x+2,y-1}) and so on 8 cases are there for knight
        for (auto move : movements)
        {
            int childx = move.first + x;
            int childy = move.second + y;
            if (!isvalid(childx, childy))
                continue;
            if (!vis[childx][childy])
            {
                q.push({childx, childy});
                level[childx][childy] = level[x][y] + 1;
                vis[childx][childy] = 1;
            }
        }
        if (level[dx][dy] != INF)
        {
            break;
        }
    }
    return level[dx][dy];
}

void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            level[i][j] = INF;
            vis[i][j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        reset();
        string s, d;
        cin >> s >> d;
        cout << bfs(s, d) << endl;
    }

    return 0;
}