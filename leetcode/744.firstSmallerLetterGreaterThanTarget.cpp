// The idea is to traverse through the index and then we have to find the index of the element whic is larger than target.
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        int s = -1; // defining the value of start and end as out of bound for easier seaching of middle element.
        int e = n;
        while (s + 1 < e)
        {
            int mid = (s + e) / 2;
            if (letters[mid] <= target)
            {
                s = mid;
            }
            else
            {
                e = mid;
            }
        }
        return letters[(s + 1) % n]; // wrapping up of element using modulous.
    }
};