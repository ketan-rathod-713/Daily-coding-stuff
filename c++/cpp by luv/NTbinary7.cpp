#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5;
const int INF = 1e9;
// leetcode Question
// do this question at own and if not understood then see the video of cwl ha ha
vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    int subset_ct = (1 << n); // 2 ki power n
    vector<vector<int>> subsets;
    for (int mask = 0; mask < subset_ct; mask++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if (mask & (i << i) != 0)
            { // if this then bit is set
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto all_subsets = subsets(v);
    for (auto subset : all_subsets)
    {
        for (int ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}