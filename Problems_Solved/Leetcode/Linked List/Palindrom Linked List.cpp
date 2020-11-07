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
        if (head == NULL or head->next == NULL)
        {
            return true;
        }
        ListNode *slow = head, *fast = head;
        ListNode *previous = NULL, *temp;
        while (fast != NULL and fast->next != NULL)
        {
            fast = fast->next->next;
            temp = slow->next;
            slow->next = previous;
            previous = slow;
            slow = temp;
        }
        if (fast == NULL)
        {
            while (previous != NULL && slow != NULL)
            {
                if (previous->val != slow->val)
                {
                    return false;
                }
                previous = previous->next;
                slow = slow->next;
            }
        }
        else
        {
            slow = slow->next;
            while (previous != NULL && slow != NULL)
            {
                if (previous->val != slow->val)
                {
                    return false;
                }
                previous = previous->next;
                slow = slow->next;
            }
        }
        return true;
    }
};