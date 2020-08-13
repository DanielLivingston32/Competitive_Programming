#include <iostream>

using namespace std;

template <typename T>
class queue
{
    T *arr;
    int front;
    int rear;
    int capacity;

public:
    queue(int size=1)
    {
        front = rear = 0;
        capacity = size;
        arr = new T[size];
    }

    void enqueue(T element)
    {
        if (capacity == rear)
        {
            cout << "Queue is full. Overflow Error." << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty. Underflow Error." << endl;
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        if (front == rear)
        {
            cout << "Queue is empty. Nothing to display" << endl;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }

    ~queue()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter the default size of the queue: ";
    cin >> n;
    queue<int> q(n);
    cout << "Choose any one of the given option: " << endl;
    cout << "1) Insert[Enqueue]\n2) Delete[Dequeue]\n3) Display\n4) Exit" << endl;
    int choice, value;
    cin >> choice;
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be pushed: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        default:
            cout << "Sorry Invalid input. Try again " << endl;
        }
        cout << "Choose any one of the given option: " << endl;
        cout << "1) Push\n2) Pop\n3) Display\n4) Exit" << endl;
        cin >> choice;
    }
}