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

    // Odd and Even heads
    Node *oddStart = new Node(-1);
    Node *evenStart = new Node(-1);
    Node *odd = oddStart, *even = evenStart;

    while (head != NULL)
    {
        if (head->data & 1)
        {
            odd->next = head;
            odd = odd->next;
        }
        else
        {
            even->next = head;
            even = even->next;
        }
        head = head->next;
    }
    odd->next = evenStart->next;
    even->next = NULL;
    print(oddStart->next);
}