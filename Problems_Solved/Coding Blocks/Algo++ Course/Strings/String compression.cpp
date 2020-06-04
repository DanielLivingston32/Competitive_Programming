// Time Complexity: O(Length of string)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int cnt = 1;
    cout << input[0];
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] == input[i - 1])
        {
            cnt++;
        }
        else
        {
            cout << cnt;
            if (i != input.size() - 1)
                cnt = 1;
            cout << input[i];
        }
    }
    cout << cnt;
}