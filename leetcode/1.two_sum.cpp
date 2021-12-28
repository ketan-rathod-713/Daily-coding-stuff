class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;

        int n = nums.size();

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp.insert({nums[i], i});
        }

        for (int i = 0; i < n; i++)
        {
            auto fnd = mp.find(target - nums[i]);
            if (fnd != mp.end() && fnd->second != i)
            {
                res.push_back(i);
                res.push_back(fnd->second);
                break;
            }
        }

        return res;
    }
};