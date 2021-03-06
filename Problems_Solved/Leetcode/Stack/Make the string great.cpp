class Solution
{
public:
    string makeGood(string s)
    {
        stack<char> callStack;
        char temp;
        for (auto x : s)
        {
            temp = x;
            if (callStack.empty() or (abs(callStack.top() - temp) - 32 != 0))
            {
                callStack.push(temp);
            }
            else
            {
                callStack.pop();
            }
        }
        string result;
        while (!callStack.empty())
        {
            result = callStack.top() + result;
            callStack.pop();
        }
        return result;
    }
};