class Solution
{
public:
    string removeOuterParentheses(string S)
    {
        string res;
        int cnt = 0;
        for (char &c : S)
        {
            if (c == '(' && ++cnt != 1)
                res += c;
            if (c == ')' && --cnt != 0)
                res += c;
        }
        return res;
    }
};