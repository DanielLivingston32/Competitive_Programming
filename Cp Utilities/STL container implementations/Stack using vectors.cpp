#include <iostream>
#include <vector>

using namespace std;

// Template for stack using vectors as the underlying implementation.
template <typename T>
class Stack
{
private:
    vector<T> stack;

public:
    void push(T data)
    {
        stack.push_back(data);
    }

    void pop()
    {
        stack.pop_back();
    }

    T top()
    {
        return stack[stack.size() - 1];
    }

    bool isEmpty()
    {
        if (stack.size() == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    int temp;
    Stack<int> a;
    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push(temp);
    }
    // Output
    for (int i = 0; i < n - 1; i++)
    {
        cout << a.top() << " -> ";
        a.pop();
    }
    cout << a.top();
}