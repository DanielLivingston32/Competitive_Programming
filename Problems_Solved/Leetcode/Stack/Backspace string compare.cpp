class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        stack<char> container;
        string resS, resT;
        for (auto x : S)
        {
            if (x == '#')
            {
                if (!container.empty())
                {
                    container.pop();
                }
            }
            else
            {
                container.push(x);
            }
        }
        while (!container.empty())
        {
            resS = container.top() + resS;
            container.pop();
        }

        for (auto x : T)
        {
            if (x == '#')
            {
                if (!container.empty())
                {
                    container.pop();
                }
            }
            else
            {
                container.push(x);
            }
        }

        while (!container.empty())
        {
            resT = container.top() + resT;
            container.pop();
        }
        if (resS == resT)
        {
            return true;
        }
        return false;
    }
};