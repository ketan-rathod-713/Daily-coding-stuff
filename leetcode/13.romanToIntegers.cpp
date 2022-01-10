class Solution
{
public:
    unordered_map<char, int> symbolvalue = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int romanToInt(string s)
    {
        int sum = 0;
        map<int, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[i] = symbolvalue[s[i]]; // assign the value in map in ordered manner
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (mp[i] >= mp[i + 1])
            {
                sum = sum + mp[i];
            }
            else
            {
                sum = sum - mp[i];
            }
        }

        return sum;
    }
};