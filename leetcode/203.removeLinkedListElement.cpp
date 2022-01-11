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
4
    // in this we have to make one dummy node and then point to head and just do by normal thing
    // and at last return dummy->next
    class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        ListNode *dummy = new ListNode(-1); // here we can make dummy node by this
        dummy->next = head;

        ListNode *prev = dummy;
        ListNode *curr = dummy;

        while (curr != NULL)
        {

            if (curr->val == val)
                prev->next = curr->next;

            else // here else is very imp as if not then output of 7 7 7 7 will be 7 7 and not []
                prev = curr;

            curr = curr->next;
        }

        return dummy->next;
    }
};