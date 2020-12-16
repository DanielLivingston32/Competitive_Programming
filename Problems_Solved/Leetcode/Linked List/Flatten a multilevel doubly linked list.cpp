/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
public:
    Node *flatten(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        //Recur case
        Node *smallHead = NULL;
        Node *temp;
        if (head->child)
        {
            temp = flatten(head->child);
            smallHead = flatten(head->next);

            // Connecting head and child
            head->next = temp;
            temp->prev = head;

            // Connecting child tail and next node
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            if (smallHead != NULL)
            {
                temp->next = smallHead;
                smallHead->prev = temp;
            }
            head->child = NULL;
            return head;
        }
        smallHead = flatten(head->next);
        head->next = smallHead;
        if (smallHead)
        {
            smallHead->prev = head;
        }

        return head;
    }
};