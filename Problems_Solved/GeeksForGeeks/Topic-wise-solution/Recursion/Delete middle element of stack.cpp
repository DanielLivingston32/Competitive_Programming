// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    void deleteMid(stack<int> &s, int sizeOfStack, int curr = 0)
    {
        // Base case
        if (ceil(sizeOfStack / 2) == curr)
        {
            s.pop();
            return;
        }
        // Recursive case
        int temp = s.top();
        s.pop();
        deleteMid(s, sizeOfStack, curr + 1);
        s.push(temp);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++)
        {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty())
        {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends