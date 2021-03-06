class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        stack<int> calcStack;
        int sum = 0;
        int a, b;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "+")
            {
                sum = 0;
                a = calcStack.top();
                calcStack.pop();
                b = calcStack.top();
                calcStack.pop();
                sum += (a + b);
                calcStack.push(b);
                calcStack.push(a);
                calcStack.push(sum);
            }
            else if (ops[i] == "C")
            {
                calcStack.pop();
            }
            else if (ops[i] == "D")
            {
                sum = calcStack.top() * 2;
                calcStack.push(sum);
            }
            else
            {
                calcStack.push(stoi(ops[i]));
            }
        }
        sum = 0;
        while (!calcStack.empty())
        {
            sum += calcStack.top();
            calcStack.pop();
        }

        return sum;
    }
};