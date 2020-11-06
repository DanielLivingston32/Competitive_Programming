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
    // I am using 2 pointer technique with fast incremented to k positions and then both move until fast->next == NULL[To stop before the last one so that we will get one before node for k]. Now just connect this part from k to the head
    ListNode *rotateRight(ListNode *head, int k)
    {

        ListNode *fast = head, *slow = head;
        // Edge cases when there are 0 or 1 elements
        if (head == NULL or head->next == NULL)
        {
            return head;
        }
        // To calculate length of the linked list
        int n = 0;
        while (fast != NULL)
        {
            n++;
            fast = fast->next;
        }
        fast = head;
        // Doing this to avoid cases where k is greater than the length of the linked list
        int cnt = k % n;
        // When cnt==0 it means the value of k and n are equal. If k is equal to the length of the linked list then after you rotate it the linked list will still remain in the same place where it started. So this case.
        if (cnt == 0)
        {
            return head;
        }

        while (cnt--)
        {
            fast = fast->next;
        }
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        // Break the connection between the previous node from kth position and make it NULL.
        // Then go to the last position in the broken node(the ones after kth position).
        // Make a connection between this last node and the head of linked list.
        // Now update head.
        ListNode *temp = slow->next;
        slow->next = NULL;
        fast->next = head;
        head = temp;
        return head;
    }
};