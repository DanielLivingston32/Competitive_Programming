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
    int getDecimalValue(ListNode *head)
    {
        long long answer = 0;
        long long temp = 0;
        while (head)
        {
            answer <<= 1;
            answer |= head->val;
            head = head->next;
        }
        return answer;
    }
};