class Solution
{
public:
    int findComplement(int n)
    {
        vector<int> arr;
        // creating binary array representation for the number
        while (n)
        {
            arr.push_back(n % 2);
            n /= 2;
        }
        int sz = arr.size();
        // Since, we are retrieving bits in backward fashion so we need to reverse it.
        reverse(arr.begin(), arr.end());
        // switching bit values
        for (int i = 0; i < sz; ++i)
        {
            arr[i] = !arr[i];
        }
        long long t = 1;
        // converting our above array into decimal form.
        for (int i = sz - 1; i >= 0; --i)
        {
            n += arr[i] * t;
            t *= 2;
        }
        return n;
    }
};