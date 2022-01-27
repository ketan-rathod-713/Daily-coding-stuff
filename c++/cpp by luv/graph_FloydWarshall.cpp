// me yaha pe k nodes tak Shortest path find kar raha hu and then me dekhuga ki kya me k+1 se shortest path find kar sakta hu ya nahi ha ha if then do so
// then hamare pas i se k+1 and k+1 se j ka SP find

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 510;
const int INF = 1e9;

int dist[N][N];

int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                dist[i][j] = 0; //  for same vertex
            else
                dist[i][j] = INF;
        }
    }

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }
    // now taken graph so now do floyd warshal algorithm ha ha
    // hame sare levels ke through jana he

    for (int k = 1; k <= n; k++)
    { // harek k ke liye hame hame i to j ka min. distance find karna he ha ha
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]); // it is very simple in seeing but concept is very imp ha ha
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "I ";
            }
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 6 9
// 1 2 1
// 1 3 5
// 2 3 2
// 3 5 2
// 2 5 1
// 2 4 2
// 4 5 3
// 4 6 1
// 5 6 2