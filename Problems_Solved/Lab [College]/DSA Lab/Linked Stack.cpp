#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtTop(node *&top, int data)
{
    if (top == NULL)
    {
        top = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = top;
    top = n;
}

void deleteTop(node *&top)
{
    if (top == NULL)
    {
        cout << "No elements in Linked Stack" << endl;
        return;
    }
    node *temp = top->next;
    delete top;
    top = temp;
    cout << "Element in the top position removed" << endl;
}

void print(node *top)
{
    while (top != NULL)
    {
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}

int main()
{
    // Identification
    string collision = "\U0001F4A5";
    string copyright = "️\U000000A9";
    string fire_emoji = "\U0001F525";
    cout << endl
         << endl
         << copyright << " COPYRIGHT" << endl
         << fire_emoji << "DANIEL LIVINGSTON" << fire_emoji << endl
         << collision << "URK19CS2001" << collision << endl
         << endl;
    // End Identification - Program Starts

    int temp;
    node *top = NULL;
    int choice;
    cout << "Choose one option from the ones given below:\n1. Insert element in Linked Stack\n2. Delete element from Linked Stack\n3. Display elements\n4. Exit" << endl;
    cin >> choice;
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            insertAtTop(top, temp);
            break;
        case 2:
            deleteTop(top);
            break;
        case 3:
            cout << "Diplaying elements in linked stack:" << endl;
            print(top);
            break;
        default:
            cout << "Wrong input.. Try again..." << endl;
        }
        cout << "Choose one option from the ones given below:\n1. Insert element in Linked Stack\n2. Delete element from Linked Stack\n3. Display elements\n4. Exit" << endl;
        cin >> choice;
    }
}