// it is just like bfs
// particular node deta hu and then do node se ek sath start ho jao
// and then find kon sabse pehle find karega
// sare source ko ek sath dal do queue me
// jab sari chise ek sath dal dunga to unka level 0 hoga and un sabke child ka level 1 hoga
// for ex. if node 6 has level of 1 wrt to 2 and level of 2 wrt to 1 . So first me hi 6 ho jaega initialise so then ham usme 2 dal nahi payege .. thats why we use this BFS ha ha

// one codeshef question we are going to solve hee
// Practice Questions:
// https://codeforces.com/blog/entry/54310
// https://www.codechef.com/SNCKPB17/pro... (dsicussed)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e3;
const int INF = 1e9;

// as here we are going to deal with grid so we used array
int val[N][N];
int vis[N][N];
int lev[N][N];
int n, m;

vector<pair<int, int>> movements = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}}; // when time will come i will just add this movements to the existing parent node and get child node
bool isValid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < m; // check if n and m are placed at right position
}

int bfs()
{
    int mx = 0; // max value in grid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx = max(mx, val[i][j]);
        }
    }

    queue<pair<int, int>> q;
    // agar value max he to use queue me dal do
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mx == val[i][j])
            {
                q.push({i, j});
                lev[i][j] = 0; // sabhi ka level 0 se initialise kar do ha ha
                vis[i][j] = 1;
            }
        }
    }

    // I think there is nothing new here only just we are using BFS concept every time and just adding little functionality to it .. so i think now i should not have the fear of graph and tree and now i can understand it ha hha .. face the fear is the crucial aspect in ones life .. ohh ho motivation in coding .. ohk lots of typing now come back to coding i want no distraction if there then should be beautifull hmmmm..samaj rahe ho..just typed anything that came to mind dont mind it .
    while (!q.empty())
    {
    }
}

// now we need reset function to reset all common values as we are dealing with test cases here

void reset()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            lev[i][j] = INF;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> val[i][j];
            }
        }
        cout << BFS << endl;
    }
    return 0;
}