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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *newHeadStart = new ListNode(-1);
        ListNode *newHeadLast = new ListNode(-1);
        ListNode *beforeIterator = newHeadStart, *afterIterator = newHeadLast;
        while (head != NULL)
        {
            if (head->val < x)
            {
                beforeIterator->next = head;
                beforeIterator = beforeIterator->next;
            }
            else
            {
                afterIterator->next = head;
                afterIterator = afterIterator->next;
            }

            head = head->next;
        }
        afterIterator->next = NULL;
        beforeIterator->next = newHeadLast->next;
        delete newHeadLast;
        return newHeadStart->next;
    }
};