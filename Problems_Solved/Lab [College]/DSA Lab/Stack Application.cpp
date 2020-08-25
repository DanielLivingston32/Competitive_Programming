#include <bits/stdc++.h>

using namespace std;

int calculator(int f, int s, const string &i)
{
    switch (i[0])
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
    }
}

// 10 2 8 * + 3 -

int main()
{
    // Identification
    string collision = "\U0001F4A5";
    string copyright = "️\U000000A9";
    string fire_emoji = "\U0001F525";
    cout << endl
         << endl
         << copyright << " COPYRIGHT" << endl
         << fire_emoji << "DANIEL LIVINGSTON" << fire_emoji << endl
         << collision << "URK19CS2001" << collision << endl
         << endl;
    // End Identification - Program Starts

    string input;
    getline(cin, input);
    stack<int> calc_block;
    string operators = "+-*/%";
    stringstream tokeniser_container(input);
    string i;
    while (getline(tokeniser_container, i, ' '))
    {
        if (operators.find(i) != string::npos)
        {
            // cout << "OPerator: " << i << endl;
            int second_operand = calc_block.top();
            calc_block.pop();
            int first_operand = calc_block.top();
            calc_block.pop();
            calc_block.push(calculator(first_operand, second_operand, i));
        }
        else
        {
            calc_block.push(stoi(i));
        }
        // cout << calc_block.top() << endl;
    }
    cout << calc_block.top() << endl;
}