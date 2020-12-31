// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
public:
    stack<int> s;
    void sort();
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
        ss->sort();
        printStack(ss->s);
    }
} // } Driver Code Ends

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void sortHelper(stack<int> &s, int elem)
{
    // Base case
    if (s.empty())
    {
        s.push(elem);
        return;
    }
    if (elem >= s.top())
    {
        s.push(elem);
        return;
    }
    // Recursive case
    int temp = s.top();
    s.pop();
    sortHelper(s, elem);
    s.push(temp);
}

void SortedStack ::sort()
{
    // Base case
    if (s.empty())
    {
        return;
    }

    // Recursive case
    int temp = s.top();
    s.pop();
    sort();
    sortHelper(s, temp);
}