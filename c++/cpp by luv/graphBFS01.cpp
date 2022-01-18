// in this we are going to see the problem of 0-1 graph from the codeshef ha ha
// this question is solved without using the dijextra algorithm ha ha

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int INF = 1e9;
const int N = 1e5;
vector<pair<int, int>> g[N]; // as we want weighted graph so we used this
vector<int> level(N, INF);   // all values initialised to infinity
// we have to declare the infinity it is not bydefault given or like that
int n, m;

int bfs()
{
    deque<int> q;
    q.push_back(1);
    level[1] = 0;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop_front();

        for (auto child : g[cur_v])
        {
            int child_v = child.first;
            int wt = child.second;
            // now until now its the basic same as bfs now comes the logic ha ha
            // check level
            if (level[cur_v] + wt < level[child_v])
            {                                       // agar parent ka level child se kam he then
                level[child_v] = level[cur_v] + wt; // why we dont use visit because koi bhi node do bar yaha par aa sakti he by this method as we want lowest level from this method
                // sbse start me infinity tha then 1 hoga and then 0 ho sakta he so this is the logic
                if (wt == 1)
                {
                    q.push_back(child_v);
                }
                else
                {
                    q.push_front(child_v); // as for level 0 add in start
                }
            }
        }
    }

    return level[n] == INF ? -1 : level[n];
}

int main()
{

    cin >> n >> m; // vertices and edges
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back({y, 0}); // this is what question given now we will also enter the reverse of it for our use haa ha
        g[y].push_back({x, 1}); // reverse of direction with weight of 1 ha ha
    }

    cout << bfs() << endl;
    return 0;
}