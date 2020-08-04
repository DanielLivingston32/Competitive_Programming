#include <iostream>
#include <queue>

using namespace std;

template <typename T>
// First implementation: Sacrificing speed of pop funcition i.e: Pop function takes O(N) time to complete while remaining takes O(1)
class stack1
{
    queue<T> q1, q2;

public:
    // Function for pushing element from stack
    void push(T element_to_push)
    {
        q1.push(element_to_push);
    }

    // Function for poping element from stack
    void pop()
    {
        // Logic: Copy the first n-1 elements and pop them from the first queue and paste it into the second queue.
        // Now pop the remaining element from the first queue and swap both the queue so that all the elements will go back to q1.

        if (q1.empty())
        {
            return;
        }

        while (q1.size() > 1)
        {
            T element = q1.front();
            q1.pop();
            q2.push(element);
        }
        q1.pop();
        swap(q1, q2);
    }

    // Function to return the topmost element in a stack
    T top()
    {
        return q1.back();
    }

    // Function to check if the array is empty or not
    bool empty()
    {
        return q1.size() == 0;
    }
};

template <typename T>
// Second implementation: Sacrificing speed of push funcition i.e: Pop function takes O(N) time to complete while remaining takes O(1)
class stack2
{
    queue<T> q1, q2;

public:
    // Function for pushing element from stack
    void push(T element_to_push)
    {
        q2.push(element_to_push);
        while (!q1.empty())
        {
            T element = q1.front();
            q2.push(element);
            q1.pop();
        }
        swap(q1, q2);
    }

    // Function to return the topmost element in a stack
    void pop()
    {
        q1.pop();
    }

    // Function to return the topmost element in a stack
    T top()
    {
        return q1.front();
    }

    // Function to check if the array is empty or not
    bool empty()
    {
        return q1.size() == 0;
    }
};

int main()
{
    stack1<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    stack2<int> s2;
    s2.push(4);
    s2.push(3);
    s2.push(2);
    s2.push(1);
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
}