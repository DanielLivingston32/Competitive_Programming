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

void input(Node *&head, Node *&tail)
{
    head = NULL;
    tail = NULL;
    int temp;
    cin >> temp;
    while (temp != -1)
    {
        insert_at_tail(head, tail, temp);
        cin >> temp;
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
    int k;
    Node *head, *tail;
    input(head, tail);
    cin >> k;

    // Go to the k+1 Node from end
    Node *fast = head, *slow = head;
    while (k--)
    {
        fast = fast->next;
    }

    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    cout << slow->data;
}