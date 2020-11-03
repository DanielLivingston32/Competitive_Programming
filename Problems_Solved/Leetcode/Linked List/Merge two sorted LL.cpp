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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // Base case
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        // Result head
        ListNode *result_head = NULL;

        // Small Head for recursive call
        ListNode *smallHead;

        // Recursive call and assumption
        if (l1->val >= l2->val)
        {
            result_head = l2;
            // Recursive call
            smallHead = mergeTwoLists(l1, l2->next);
            result_head->next = smallHead;
        }
        else
        {
            result_head = l1;
            // Recursive call
            smallHead = mergeTwoLists(l1->next, l2);
            result_head->next = smallHead;
        }

        return result_head;
    }
};