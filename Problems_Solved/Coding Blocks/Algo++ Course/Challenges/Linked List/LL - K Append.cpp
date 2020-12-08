#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

class Node
{
public:
    long int data;
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

void input(Node *&head, Node *&tail, int n)
{
    head = NULL;
    tail = NULL;
    int temp;
    while (n--)
    {
        cin >> temp;
        insert_at_tail(head, tail, temp);
    }
}

void print(Node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << head->data;
}

int main()
{
    // Inputs
    int n, k;
    cin >> n;
    Node *head, *tail;
    input(head, tail, n);
    cin >> k;
    k = k % n;

    // If k equal to n or multiple of n that means return same list
    if (k == 0)
    {
        print(head);
        return 0;
    }

    // Go to the k+1 Node from end
    Node *fast = head, *slow = head;
    while (k--)
    {
        fast = fast->next;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    // Connect the tail with head. Update head as the kth node from end. Update K+1 of next as NULL
    fast->next = head;
    head = slow->next;
    slow->next = NULL;
    print(head);
}