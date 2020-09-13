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

void enqueue(node *&rear, node *&front, int data)
{
    if (rear == NULL)
    {
        rear = new node(data);
        front = rear;
        return;
    }
    node *n = new node(data);
    rear->next = n;
    rear = n;
}

void dequeue(node *&front, node *&rear)
{
    if (rear == NULL)
    {
        cout << "No elements in Linked Queue" << endl;
        return;
    }
    cout << "The front element being deleted is: ";
    if (front == rear)
    {
        cout << front->data << endl;
        delete front;
        front = NULL;
        rear = NULL;
        return;
    }
    cout << front->data << endl;
    node *temp = front->next;
    delete front;
    front = temp;
}
// front = 10
// rear = 40
// itr = 30
// 40 30 10

void print(node *rear, node *front)
{
    if (rear == NULL)
    {
        cout << "No elements in Linked Queue" << endl;
        return;
    }
    while (front != rear)
    {
        cout << front->data << " ";
        front = front->next;
    }
    cout << rear->data;
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
    node *rear = NULL;
    node *front = NULL;
    int choice;
    cout << "Choose one option from the ones given below:\n1. Insert element in Linked Queue [ENQUEUE]\n2. Delete element from Linked Queue [DEQUEUE]\n3. Display elements\n4. Exit" << endl;
    cin >> choice;
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            enqueue(rear, front, temp);
            break;
        case 2:
            dequeue(front, rear);
            break;
        case 3:
            cout << "Diplaying elements in Linked Queue:" << endl;
            print(rear, front);
            break;
        default:
            cout << "Wrong input.. Try again..." << endl;
        }
        cout << "Choose one option from the ones given below:\n1. Insert element in Linked Queue [ENQUEUE]\n2. Delete element from Linked Queue [DEQUEUE]\n3. Display elements\n4. Exit" << endl;
        cin >> choice;
    }
}