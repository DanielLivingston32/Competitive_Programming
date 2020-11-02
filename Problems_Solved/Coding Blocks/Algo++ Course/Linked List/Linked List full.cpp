#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert_at_head(Node *&head, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}

void input_elements(Node *&head)
{
    int data;
    cin >> data;
    Node *tail = head;
    while (data != -1)
    {
        insert_at_tail(head, tail, data);
        cin >> data;
    }
}

void print(Node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data;
}

istream &operator>>(istream &is, Node *&head)
{
    input_elements(head);
    return is;
}

ostream &operator<<(ostream &os, Node *head)
{
    print(head);
    return os;
}

void reverse_linked_list(Node *&head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
}

Node *recursive_reverse_linked_list(Node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    Node *smallHead = recursive_reverse_linked_list(head->next);
    Node *temp = head->next;
    temp->next = head;
    head->next = NULL;
    return smallHead;
}

Node *midpoint(Node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *merge(Node *a, Node *b)
{
    // Base case
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }

    // Head Pointer
    Node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}

bool cycleDetection(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void CycleRemoval(Node *&head)
{
    Node *slow = head->next;
    Node *fast = head->next->next;
    while (slow != fast)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    slow = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    fast->next = NULL;
}

// TIme Complexity: O(N)
Node *mergeSort(Node *head)
{
    // Base case
    if (head->next == NULL or head == NULL)
    {
        return head;
    }
    // Recursive case
    // 1. Break
    // Midpoint
    Node *Mid = midpoint(head);

    Node *a = head;
    Node *b = Mid->next;

    Mid->next = NULL;

    // 2. Sort the divided portions using recursion
    a = mergeSort(a);
    b = mergeSort(b);

    // 3. Merge the sorted Linked List
    head = merge(a, b);
    return head;
}

int main()
{
    Node *head = NULL;
    // cin >> head;
    // head = recursive_reverse_linked_list(head);
    // cout << head << endl;
    // Node *mid = midpoint(head);
    // cout << mid->data << endl;
    // Node *head2 = NULL;
    // cin >> head >> head2;
    // Node *SortedHead = merge(head, head2);
    // cin >> head;
    // cout << "Sorted Linked List using Merge Sort is :\n"
    //      << mergeSort(head);
    head = new Node(1);
    Node *temp = head;
    Node *junc;
    temp->next = new Node(2);
    temp = temp->next;
    temp->next = new Node(3);
    temp = temp->next;
    junc = temp;
    temp->next = new Node(4);
    temp = temp->next;
    temp->next = new Node(5);
    temp = temp->next;
    temp->next = new Node(6);
    temp = temp->next;
    temp->next = new Node(7);
    temp = temp->next;
    temp->next = junc;
    if (cycleDetection(head))
    {
        cout << "WOrks" << endl;
    }
    CycleRemoval(head);
    cout << head;
}