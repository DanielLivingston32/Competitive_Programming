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

class Singly_Circular_Linked_List
{
public:
    node *head;
    node *tail;

    Singly_Circular_Linked_List()
    {
        head = NULL;
        tail = NULL;
    }

    void insert_head(int data)
    {
        if (head == NULL)
        {
            cout << "List is empty. Adding element.";
            node *n = new node(data);
            head = tail = n;
            tail->next = head;
            return;
        }
        node *n = new node(data);
        n->next = head;
        head = n;
        tail->next = head;
    }

    void insert_any_position(int data, int position)
    {
        if (head == NULL)
        {
            cout << "List is empty. Adding element at the head..." << endl;
            insert_head(data);
            return;
        }
        node *temp = head;
        int cnt = 0;
        while (cnt < position)
        {
            if (temp->next == head)
            {
                cout << "Given position is greater than the no of elements in list. Adding element at the tail of the list." << endl;
                insert_end(data);
                return;
            }
            temp = temp->next;
            cnt++;
        }
        if (temp->next == head)
        {
            insert_end(data);
            return;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }

    void insert_end(int data)
    {
        if (head == NULL)
        {
            insert_head(data);
            return;
        }
        node *n = new node(data);
        tail->next = n;
        tail = n;
        tail->next = head;
    }

    void delete_head(node *temp)
    {
        if (head == tail)
        {
            delete temp;
            head = tail = NULL;
            return;
        }
        head = head->next;
        node *temp2 = temp->next;
        delete temp2;
        temp->next = head;
    }

    void delete_tail(node *temp)
    {
        if (head == tail)
        {
            delete temp;
            head = tail = NULL;
            return;
        }
        tail = temp;
        temp = temp->next;
        delete temp;
        tail->next = head;
    }

    void delete_node(int value)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        node *temp = head;
        while (temp->next != head)
        {
            if (temp->next->data == value)
            {
                if (temp->next == head)
                {
                    delete_head(temp);
                    return;
                }
                else if (temp->next == tail)
                {
                    delete_tail(temp);
                    return;
                }
                else
                {
                    node *temp2 = temp->next;
                    temp->next = temp2->next;
                    delete (temp2);
                    return;
                }
            }
            temp = temp->next;
        }
        if (temp->next->data == value)
        {
            if (temp->next == head)
            {
                delete_head(temp);
                return;
            }
            else if (temp->next == tail)
            {
                delete_tail(temp);
                return;
            }
            else
            {
                temp->next = temp->next->next;
                temp = temp->next;
                delete (temp);
                return;
            }
        }
        cout << "Element not found" << endl;
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        node *temp = head;
        while (temp != tail)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

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

    int temp, choice, position;
    Singly_Circular_Linked_List *list = new Singly_Circular_Linked_List();
    cout << "Choose one option from the ones given below:\n1. Insert at front of Singly Linked List\n2. Insert at end of Singly Linked List\n3. Insert at any position in Singly Linked List\n4. Delete element from Singly Linked List\n5. Display elements\n6. Exit" << endl;
    cin >> choice;
    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            list->insert_head(temp);
            break;
        case 2:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            list->insert_end(temp);
            break;
        case 3:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            cout << "Enter position to insert" << endl;
            cin >> position;
            list->insert_any_position(temp, position);
            break;
        case 4:
            cout << "Enter the value to delete: " << endl;
            cin >> temp;
            list->delete_node(temp);
            break;
        case 5:
            list->print();
            break;
        default:
            cout << "Wrong input.. Try again..." << endl;
        }
        cout << "Choose one option from the ones given below:\n1. Insert at front of Singly Linked List\n2. Insert at end of Singly Linked List\n3. Insert at any position in Singly Linked List\n4. Delete element from Singly Linked List\n5. Display elements\n6. Exit" << endl;
        cin >> choice;
    }
}
