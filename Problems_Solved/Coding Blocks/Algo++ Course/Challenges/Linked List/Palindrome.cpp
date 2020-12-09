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
    int n;
    cin >> n;
    Node *head, *tail;
    input(head, tail, n);

    if (head == NULL or head->next == NULL)
    {
        cout << "true";
        return 0;
    }
    Node *slow = head, *fast = head->next, *previous = head, *Next = slow->next;
    while (fast != NULL and fast->next != NULL)
    {
        previous = slow;
        fast = fast->next->next;
        slow = Next;
        Next = slow->next;
        slow->next = previous;
    }
    head->next = NULL;
    if (fast == NULL)
    {
        while (previous->data == Next->data)
        {
            if (previous->next == NULL)
            {
                cout << "true";
                return 0;
            }
            previous = previous->next;
            Next = Next->next;
        }
        cout << "false";
    }
    else
    {
        while (slow->data == Next->data)
        {
            if (slow->next == NULL)
            {
                cout << "true";
                return 0;
            }
            slow = slow->next;
            Next = Next->next;
        }
        cout << "false";
    }
}