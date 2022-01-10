class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        auto n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n / 2];
    }
};