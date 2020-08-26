#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string input;
        cin >> input;
        string result = "";
        int start_index = 0;
        int end_index = n - 1;
        int i = 0;
        while (end_index < input.size())
        {
            result += input[start_index + i];
            start_index++;
            end_index++;
            i++;
        }
        cout << result << endl;
    }
}