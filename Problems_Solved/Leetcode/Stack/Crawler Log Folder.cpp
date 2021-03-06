class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<int> callStack;
        int i = 0;
        for (auto x : logs)
        {
            if (x == "./")
            {
                continue;
            }
            else if (x == "../")
            {
                if (!callStack.empty())
                {
                    callStack.pop();
                    i--;
                }
            }
            else
            {
                callStack.push(++i);
            }
        }
        if (callStack.empty())
        {
            return 0;
        }
        return callStack.top();
    }
};