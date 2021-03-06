class Solution
{
public:
    int minAddToMakeValid(string S)
    {
        stack<char> container;
        for (auto x : S)
        {
            if (!container.empty() and container.top() == '(' and x == ')')
            {
                container.pop();
            }
            else
            {
                container.push(x);
            }
        }
        return container.size();
    }
};