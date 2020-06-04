// Time Complexity: O(Length of string)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    for (int i = 0; i < input.size() - 1; ++i)
    {
        cout << input[i];
        cout << input[i + 1] - input[i];
    }
    cout << input[input.size() - 1];
}