#include <iostream>
#include <string>
#include <stack>

using namespace std;

int calculator(int f, int s, char i)
{
    switch (i)
    {
    case '+':
        return f + s;
        break;
    case '-':
        return f - s;
        break;
    case '*':
        return f * s;
        break;
    case '/':
        return f / s;
        break;
    default:
        return f % s;
        break;
    }
}

int main()
{
    string input;
    cin >> input;
    stack<int> calc_block;
    string operators = "+-*/%";
    for (auto i : input)
    {
        if (operators.find(i) != string::npos)
        {
            cout << "OPerator: " << i << endl;
            int second_operand = calc_block.top();
            calc_block.pop();
            int first_operand = calc_block.top();
            calc_block.pop();
            calc_block.push(calculator(first_operand, second_operand, i));
        }
        else
        {
            calc_block.push(int(i) - 48);
        }
    }
    cout << calc_block.top();
}
