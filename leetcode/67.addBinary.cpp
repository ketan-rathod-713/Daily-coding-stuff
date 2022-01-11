class Solution
{
public:
    string addBinary(string a, string b)
    {
        int temp = 0;
        string result = "";
        int sa = a.size() - 1;
        int sb = b.size() - 1; // last element of each

        while (sa >= 0 || sb >= 0 || temp == 1)
        {
            temp += sa >= 0 ? a[sa] - '0' : 0; // store values in temp
            temp += sb >= 0 ? b[sb] - '0' : 0;

            // there are 4 possible cases temp = 0 , 1 , 2, 3 and it will solve this
            result += (temp % 2) + '0';

            temp = temp / 2; // if temp is 2 or 3 then give one carry ha ha
            sa--;
            sb--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};