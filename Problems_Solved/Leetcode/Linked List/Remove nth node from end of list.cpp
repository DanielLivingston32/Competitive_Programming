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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head, *slow = head;
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return head;
        }
        int cnt = n;
        while (cnt--)
        {
            fast = fast->next;
        }
        while (fast != NULL and fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *temp = slow->next;
        if (slow == head and fast == NULL)
        {
            delete head;
            head = temp;
            return head;
        }
        slow->next = temp->next;
        delete temp;
        return head;
    }
};