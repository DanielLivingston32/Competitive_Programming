class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> container;
        char temp;
        for (auto x : s)
        {
            if (x == '{' or x == '[' or x == '(')
            {
                container.push(x);
            }
            else
            {
                if (container.empty())
                {
                    return false;
                }
                temp = container.top();
                if (temp == '(' and x == ')')
                {
                    container.pop();
                }
                else if (temp == '[' and x == ']')
                {
                    container.pop();
                }
                else if (temp == '{' and x == '}')
                {
                    container.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (!container.empty())
        {
            return false;
        }
        return true;
    }
};