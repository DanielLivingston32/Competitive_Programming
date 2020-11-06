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
    ListNode *deleteDuplicates(ListNode *head)
    {
        // Edge cases
        if (head == NULL or head->next == NULL)
        {
            return head;
        }
        ListNode *fast = head->next, *slow = head, *temp;
        while (fast != NULL)
        {
            if (fast->val == slow->val)
            {
                temp = fast->next;
                slow->next = temp;
                delete fast;
                fast = temp;
                continue;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return head;
    }
};