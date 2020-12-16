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
    ListNode *oddEvenList(ListNode *head)
    {
        ListNode *oddNode = new ListNode(-1);
        ListNode *evenNode = new ListNode(-1);
        ListNode *oddPart = oddNode;
        ListNode *evenPart = evenNode;
        ListNode *headNode = head;
        int cnt = 0;
        while (head != NULL)
        {
            if (cnt & 1)
            {
                oddPart->next = head;
                oddPart = oddPart->next;
            }
            else
            {
                evenPart->next = head;
                evenPart = evenPart->next;
            }
            cnt++;
            head = head->next;
        }
        evenPart->next = oddNode->next;
        oddPart->next = NULL;
        return evenNode->next;
    }
};