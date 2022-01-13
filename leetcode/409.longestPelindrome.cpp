class Solution
{
public:
    map<int, int> mp;
    int longestPalindrome(string s)
    {
        int n = s.size();
        if (n == 1)
            return 1;

        for (int i = 0; i < n; i++)
        {
            mp[s[i] - '0']++;
        }
        int pairs = 0;
        map<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
        { // remember this always fucked up thing taken lots of time ha ha
            pairs += (*it).second / 2;
        }

        if (2 * pairs < n)
            return 2 * pairs + 1;
        return 2 * pairs;
    }
};