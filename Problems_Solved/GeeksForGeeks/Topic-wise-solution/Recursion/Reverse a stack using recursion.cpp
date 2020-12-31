#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
public:
    stack<int> s;
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
        s.pop();
    }
    printf("\n");
}

void insertAtLast(stack<int> &s, int elem)
{
    // Base case
    if (s.empty())
    {
        s.push(elem);
        return;
    }
    // Recursive case
    int temp = s.top();
    s.pop();
    insertAtLast(s, elem);
    s.push(temp);
}

void reverseStack(stack<int> &s)
{
    // Base case
    if (s.empty())
    {
        return;
    }

    // Recursive case
    int temp = s.top();
    s.pop();
    reverseStack(s);
    insertAtLast(s, temp);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SortedStack *ss = new SortedStack();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            ss->s.push(k);
        }
        reverseStack(ss->s);
        printStack(ss->s);
    }
}