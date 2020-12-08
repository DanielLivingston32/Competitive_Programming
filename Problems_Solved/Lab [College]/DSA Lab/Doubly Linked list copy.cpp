#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

class Doubly_Linked_List
{
public:
    node *front;
    node *end;

    Doubly_Linked_List()
    {
        front = NULL;
        end = NULL;
    }

    void insert_front(int data)
    {
        node *n = new node(data);
        n->prev = NULL;
        n->next = front;

        if (front == NULL)
        {
            end = n;
        }
        else
        {
            front->prev = n;
        }
        front = n;
    }

    void insert_after(int position, int data)
    {
        if (front == NULL)
        {
            cout << "List is empty. Adding new element in the front." << endl;
            insert_front(data);
            return;
        }
        node *itr = front;
        int cnt = 0;
        while (cnt < position)
        {
            if (itr->next == NULL)
            {
                cout << "Sorry the given position is out of range. Element will be inserted at the end" << endl;
                insert_end(data);
                return;
            }
            itr = itr->next;
            cnt++;
        }
        if (itr->next == NULL)
        {
            cout << "Sorry the given position is out of range. Element will be inserted at the end" << endl;
            insert_end(data);
            return;
        }
        node *n = new node(data);
        n->prev = itr;
        n->next = itr->next;
        itr = itr->next;
        itr->prev = n;
        itr = n->prev;
        itr->next = n;
    }

    void insert_before(int position, int data)
    {
        if (front == NULL)
        {
            cout << "List is empty. Adding new element in the front." << endl;
            insert_front(data);
            return;
        }
        if (position == 0)
        {
            insert_front(data);
            return;
        }
        node *itr = front;
        int cnt = 0;
        while (cnt < position - 1)
        {
            if (itr->next == NULL)
            {
                cout << "Sorry the given position is out of range. Element will be inserted at the end" << endl;
                insert_end(data);
                return;
            }
            itr = itr->next;
            cnt++;
        }
        if (itr->next == NULL)
        {
            cout << "Sorry the given position is out of range. Element will be inserted at the end" << endl;
            insert_end(data);
            return;
        }
        node *n = new node(data);
        n->prev = itr;
        n->next = itr->next;
        itr = itr->next;
        itr->prev = n;
        itr = n->prev;
        itr->next = n;
    }

    void insert_end(int data)
    {
        node *n = new node(data);
        n->next = NULL;
        n->prev = end;

        if (end == NULL)
        {
            front = n;
        }
        else
        {
            end->next = n;
        }
        end = n;
    }

    void deleteFirstNode()
    {
        node *temp = front;
        front = front->next;
        delete temp;
        front->prev = NULL;
    }

    void deleteLastNode()
    {
        node *temp = end;
        end = temp->prev;
        delete temp;
        end->next = NULL;
    }

    void delete_position(int position)
    {
        if (front == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        else if (end == front)
        {
            delete front;
            front = NULL;
            end = NULL;
        }
        else
        {
            node *itr = front;
            int cnt = 0;
            while (cnt < position - 1)
            {
                if (itr->next == NULL)
                {
                    cout << "Sorry the given position is out of range. Last node will be deleted" << endl;
                    deleteLastNode();
                    return;
                }
                itr = itr->next;
                cnt++;
            }
            if (itr->next == NULL)
            {
                cout << "Sorry the given position is out of range. Last node will be deleted" << endl;
                deleteLastNode();
                return;
            }
            if (position == 0)
            {
                deleteFirstNode();
                return;
            }
            if (itr->next->next == NULL)
            {
                deleteLastNode();
                return;
            }
            node *temp = itr->next;
            itr->next = temp->next;
            delete temp;
            temp = itr;
            itr = itr->next;
            itr->prev = temp;
        }
    }

    void forward_traverse()
    {
        if (front == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        node *itr = front;
        while (itr->next != NULL)
        {
            cout << itr->data << " <-> ";
            itr = itr->next;
        }
        cout << itr->data << endl;
    }

    void backward_traverse()
    {
        if (end == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        node *itr = end;
        while (itr->prev != NULL)
        {
            cout << itr->data << " <-> ";
            itr = itr->prev;
        }
        cout << itr->data << endl;
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

    int temp;
    Doubly_Linked_List *list = new Doubly_Linked_List();
    int choice, position;
    cout << "Choose one option from the ones given below:\n1. Insert at front\n2. Insert after position\n3. Insert before position\n4. Insert at end\n5. Delete at any position\n6. Display from front\n7. Display from end\n8. Exit" << endl;
    cin >> choice;
    while (choice != 8)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            list->insert_front(temp);
            break;
        case 2:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            cout << "Enter position: ";
            cin >> position;
            list->insert_after(position, temp);
            break;
        case 3:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            cout << "Enter position: ";
            cin >> position;
            list->insert_before(position, temp);
            break;
        case 4:
            cout << "Enter the data to insert" << endl;
            cin >> temp;
            list->insert_end(temp);
            break;
        case 5:
            cout << "Enter position: ";
            cin >> position;
            list->delete_position(position);
            break;
        case 6:
            list->forward_traverse();
            break;
        case 7:
            list->backward_traverse();
            break;
        default:
            cout << "Wrong Choice... Try again...\n";
        }
        cout << "Choose one option from the ones given below:\n1. Insert at front\n2. Insert after position\n3. Insert before position\n4. Insert at end\n5. Delete at any position\n6. Display from front\n7. Display from end\n8. Exit" << endl;
        cin >> choice;
    }
}