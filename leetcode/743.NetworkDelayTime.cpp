class Solution
{
public:
    static const int N = 1000;
    // static const int INF = 10000;

    int dijkstra(int source, int n, vector<pair<int, int>> g[N])
    {
        const int INF = 1e3;
        vector<int> dist(N, INF); // for dijekstra
        vector<int> vis(N, 0);    // // Now we want priority queue or we can use multi set instead of that
        // here we can also use sets here as we want to process once and pair of 3,4 and 4,3 is differernt in set
        // generally dont use priority queue as it is lillte bit confusing
        set<pair<int, int>> st; // set me first is wt and secodn is node dont be confuse
        st.insert({0, source});
        dist[source] = 0;

        while (st.size() > 0)
        {
            auto node = *st.begin(); // find min element nad can we minimis distance
            st.erase(st.begin());

            int v = node.second;
            int v_dist = node.first;
            if (vis[v])
                continue; // jese hi set se bahar nikalega bad me ham use visited kar dege
            vis[v] = 1;

            // now is v ke sare children pe jaege
            for (auto child : g[v])
            {
                int child_v = child.first;
                int wt = child.second;
                // if weight is less then current weight then do change in it else nothing
                if (dist[v] + wt < dist[child_v])
                {
                    dist[child_v] = dist[v] + wt;
                    st.insert({dist[child_v], child_v});
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] == INF)
                return -1;
            ans = max(ans, dist[i]); // as we want max time acc to that question
        }
        return ans;
    }

    // ans is max dist
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<pair<int, int>> g[N];
        for (auto vec : times)
        {
            g[vec[0]].push_back({vec[1], vec[2]}); // it will make graph according to thaat question
        }
        return dijkstra(k, n, g); // asign arguments and pass
    }
};