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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *current = head, *previous = NULL;
        while (current != NULL)
        {
            if (current->val == val)
            {
                if (previous == NULL)
                {
                    current = current->next;
                    delete head;
                    head = current;
                    continue;
                }
                else
                {
                    previous->next = current->next;
                    delete current;
                    current = previous->next;
                    continue;
                }
            }
            previous = current;
            current = current->next;
        }
        return head;
    }
};