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

Node *merge(Node *a, Node *b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }

    // Recursive case
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

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        Node *head_1, *tail_1;
        input(head_1, tail_1, n);
        cin >> n;
        Node *head_2, *tail_2;
        input(head_2, tail_2, n);
        print(merge(head_1, head_2));
        cout << endl;
    }

    return 0;
}