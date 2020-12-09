#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Constructor
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

void input(Node *&head)
{
    Node *tail = NULL;
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
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data;
}

void operator>>(istream &is, Node *&head)
{
    input(head);
}

void operator<<(ostream &os, Node *head)
{
    print(head);
}

int main()
{
    Node *head = NULL;
    // Direct method
    cin >> head;
    cout << head;
}