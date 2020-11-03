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
    void swapNode(ListNode *left, ListNode *right)
    {
        int val = left->val;
        left->val = right->val;
        right->val = val;
    }

    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
        {
            return head;
        }
        ListNode *start = head;
        while (start != NULL and start->next != NULL)
        {
            swapNode(start, start->next);
            start = start->next->next;
        }
        return head;
    }
};