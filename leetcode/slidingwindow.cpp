#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// this is comment
const int N = 1e5;
const int INF = 1e9;
int checkAna[26], alpha[26];
vector<int> findAnagrams(string s, string p)
{
    vector<int> ans;
    int n = s.size();
    int k = p.size();
    // here i will be using sliding window technique in one loop do all things
    if (n < k)
    {
        cout << "hep";
        return {};
    }
    // now enter the values in checkAna
    for (int i = 0; i < k; i++)
    {
        checkAna[p[i] - 'a']++; // it can be 2 or may be more not only 1 ha ha
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    { // traverse whole loop
        // logic == in loop one j is where the start position is
        alpha[s[i] - 'a']++; // Now char. is in record
        if (i + 1 >= k)
        { // here it can be i-j+1 may be as if j is far behind or something
            if (alpha == checkAna)
            {
                ans.push_back(j);
                cout << "equal";
            }

            // equal ho ya na ho ab hame remove karte jana he when i+1>k
            alpha[s[j] - 'a']--; // it removes the first element of the sliding window and then icrement j
            j++;
        }
    }
    return ans;
}

int main()
{
    string s = "abab", p = "ab";
    // cin >> s >> p;
    vector<int> ans = findAnagrams(s, p);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

hiiiiug
    hii ketan
        now here we can code ha ha