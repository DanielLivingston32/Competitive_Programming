#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;
};

void InsertFront(Node **head, int new_data)
{

    Node *newNode = new Node();

    newNode->data = new_data;

    newNode->next = (*head);

    *head = newNode;
}

int main()
{
    Node *head = new Node();
    while (head != NULL)
    {
        cout <<
    }
}