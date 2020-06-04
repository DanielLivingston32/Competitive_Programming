// Time complexity: O(1)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    string temp = "";
    for (int i = 0; i < input.size(); i++)
    {
        int ascii = (int)input[i];
        if (ascii > 64 && ascii < 91)
        {
            cout << temp << endl;
            temp = "";
            temp += input[i];
            continue;
        }
        temp += input[i];
    }
    cout << temp << endl;
}