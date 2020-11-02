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

void insert_at_tail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *n = new Node(data);
        head = n;
        tail = n;
        return;
    }
    Node *n = new Node(data);
    n->next = NULL;
    tail->next = n;
    tail = n;
}

void input(Node *head, Node *tail, int n)
{
    Node *head = NULL;
    Node *tail = NULL;
    int temp;
    while (n--)
    {
        cin >> temp;
        insert_at_tail(head, tail, temp);
    }
}

Node *reverse_by_k(Node *head, int n, int k)
{
    if (head == NULL && head->next == NULL)
    {
        return head;
    }
    Node *current = head;
    Node *previous = NULL;
    Node *next;
    for (int i = 0; i < k; i++)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    Node *subproblems = reverse_by_k(current, n, k);
    current->next = previous;
    return head;
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

int main()
{
    long int n, k;
    cin >> n >> k;
    Node *head, *tail;
    input(head, tail, n);
    head = reverse_by_k(head, n, k);
    print(head);
}