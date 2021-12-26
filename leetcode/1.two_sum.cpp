#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    vector<int> res;

    for (int i = 0; i < nums.size(); i++)
    {
        //             2--0 7--1 11--2 and so on
        if (mp.find(nums[i]) != mp.end())
        {
            mp[nums[i]] = i;
        }
        if (mp.find(target - nums[i]) != mp.end())
        {
            res.push_back(i);
            res.push_back(mp[target - nums[i]]);
            break;
        }
    }
    cout << res[0] << " " << res[1];
}

int main(){
    vector<int> v = {2, 7, 8, 4};
    twoSum(v, 9);
    return 0;
}