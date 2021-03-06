class Solution
{
public:
    string removeDuplicates(string S)
    {
        stack<char> arr;
        char temp;
        for (int i = 0; i < S.length(); i++)
        {
            temp = S[i];
            if (!arr.empty())
            {
                if (arr.top() == temp)
                {
                    arr.pop();
                }
                else
                {
                    arr.push(temp);
                }
            }
            else
            {
                arr.push(temp);
            }
        }
        string result;
        while (!arr.empty())
        {
            result = arr.top() + result;
            arr.pop();
        }
        return result;
    }
};