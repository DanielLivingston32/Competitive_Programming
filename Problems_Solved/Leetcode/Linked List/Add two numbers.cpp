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
    void insertAtTail(ListNode *&head, ListNode *&tail, int data)
    {
        ListNode *newNode = new ListNode(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res_head = NULL;
        ListNode *res_tail = NULL;
        int carry = 0;
        int calc = 0;
        while (l1 != NULL and l2 != NULL)
        {
            calc = carry + l1->val + l2->val;
            insertAtTail(res_head, res_tail, calc % 10);
            carry = calc / 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL)
        {
            calc = carry + l1->val;
            insertAtTail(res_head, res_tail, calc % 10);
            carry = calc / 10;
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            calc = carry + l2->val;
            insertAtTail(res_head, res_tail, calc % 10);
            carry = calc / 10;
            l2 = l2->next;
        }
        while (carry > 0)
        {
            insertAtTail(res_head, res_tail, carry % 10);
            carry = carry / 10;
        }
        return res_head;
    }
};