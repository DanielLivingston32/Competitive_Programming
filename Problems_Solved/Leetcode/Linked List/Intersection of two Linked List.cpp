/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL or headB == NULL)
        {
            return NULL;
        }
        ListNode *Pointer1 = headA, *Pointer2 = headB;
        while (Pointer1 != Pointer2)
        {
            Pointer1 = Pointer1->next;
            Pointer2 = Pointer2->next;

            if (Pointer1 == Pointer2)
            {
                return Pointer1;
            }
            // By doing this if the first pointer is shorter then the remaining length that is not present would be balanced when it goes to the other Node side.
            if (Pointer1 == NULL)
            {
                Pointer1 = headB;
            }
            if (Pointer2 == NULL)
            {
                Pointer2 = headA;
            }
        }
        return Pointer1;
    }
};