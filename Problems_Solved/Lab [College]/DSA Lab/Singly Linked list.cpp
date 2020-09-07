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

void insertAtHead(node *&head, int data)
{
  if (head == NULL)
  {
    head = new node(data);
    return;
  }
  node *n = new node(data);
  n->next = head;
  head = n;
}

void insertAtEnd(node *&head, int data)
{
  if (head == NULL)
  {
    head = new node(data);
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  node *n = new node(data);
  temp->next = n;
}

void deleteHead(node *&head)
{
  if (head == NULL)
  {
    cout << "No elements in Linked List" << endl;
    return;
  }
  node *temp = head->next;
  delete head;
  head = temp;
}

void deleteAtEnd(node *&head)
{
  if (head == NULL)
  {
    cout << "No elements in Linked List" << endl;
    return;
  }
  if (head->next == NULL)
  {
    delete head;
    head = NULL;
    return;
  }
  node *itr = head;
  while (itr->next->next != NULL)
  {
    itr = itr->next;
  }
  node *temp = itr;
  itr = itr->next;
  delete itr;
  temp->next = NULL;
}

void insertAtPosition(node *&head, int data, int position)
{
  if (head == NULL)
  {
    if (position != 0)
    {
      cout << "As the linked list is empty the given data will be added in the head of the linked list" << endl;
    }
    head = new node(data);
    return;
  }
  if (position == 0)
  {
    insertAtHead(head, data);
    return;
  }
  node *itr = head;
  int cnt = 0;
  while (cnt != position - 1)
  {
    if (itr == NULL)
    {
      cout << "As the given position exceeds the no of positions given in the linked list this element will be added to the end of the linked list..." << endl;
      insertAtEnd(head, data);
      return;
    }
    cnt++;
    itr = itr->next;
  }
  node *temp = new node(data);
  temp->next = itr->next;
  itr->next = temp;
}

void deleteAtPosition(node *head, int position)
{
  if (head == NULL)
  {
    cout << "No elements in Linked List" << endl;
    return;
  }
  else if (position == 0)
  {
    deleteHead(head);
    return;
  }
  else
  {
    node *itr = head;
    int cnt = 0;
    while (cnt != position - 1)
    {
      if (itr->next->next == NULL)
      {
        cout << "As the given position exceeds the no of positions given in the linked list the last element in the linked list will be removed..." << endl;
        deleteAtEnd(head);
        return;
      }
      cnt++;
      itr = itr->next;
    }
    if (itr->next->next == NULL)
    {
      deleteAtEnd(head);
      return;
    }
    node *temp = itr->next;
    itr->next = temp->next;
    delete temp;
  }
}

void print(node *head)
{
  if (head == NULL)
  {
    cout << "No elements is in Linked List" << endl;
    return;
  }
  for (node *temp = head; temp != NULL; temp = temp->next)
    cout << temp->data << " ";

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
  node *head = NULL;
  int choice, position;
  cout << "Choose one option from the ones given below:\n1. Insert at front\n2. Insert at any position\n3. Insert at back\n4. Delete from beginning\n5. Delete at any position\n6. Delete at end\n7. Display\n8. Exit" << endl;
  cin >> choice;
  while (choice != 8)
  {
    switch (choice)
    {
    case 1:
      cout << "Enter the data to insert" << endl;
      cin >> temp;
      insertAtHead(head, temp);
      break;
    case 2:
      cout << "Enter the data to insert" << endl;
      cin >> temp;
      cout << "Enter position: ";
      cin >> position;
      insertAtPosition(head, temp, position);
      break;
    case 3:
      cout << "Enter the data to insert" << endl;
      cin >> temp;
      insertAtEnd(head, temp);
      break;
    case 4:
      deleteHead(head);
      break;
    case 5:
      cout << "Enter position: ";
      cin >> position;
      deleteAtPosition(head, position);
      break;
    case 6:
      deleteAtEnd(head);
      break;
    case 7:
      print(head);
      break;
    default:
      cout << "Wrong Choice... Try again...\n";
    }
    cout << "Choose one option from the ones given below:\n1. Insert at front\n2. Insert at any position\n3. Insert at back\n4. Delete from beginning\n5. Delete at any position\n6. Delete at end\n7. Display\n8. Exit" << endl;
    cin >> choice;
  }
}