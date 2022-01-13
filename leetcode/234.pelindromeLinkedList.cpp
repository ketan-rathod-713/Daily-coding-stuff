/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *ptr = head;
        string s;
        while (ptr != NULL)
        {
            s.push_back(ptr->val);
            ptr = ptr->next;
        }

        string v = s;
        reverse(s.begin(), s.end());
        if (v == s)
            return true;
        else
            return false;
    }
};