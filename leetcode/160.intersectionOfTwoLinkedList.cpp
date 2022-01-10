/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// rather then storing values store address of the linkedlist node
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode *, int> mp;

        ListNode *roota = headA;
        ListNode *rootb = headB;

        while (roota != NULL)
        {
            mp[roota]++;
            roota = roota->next;
        }

        while (rootb != NULL)
        {
            if (mp.find(rootb) != mp.end())
                return rootb;
            else
            {
                rootb = rootb->next;
            }
        }

        return NULL;
    }
};