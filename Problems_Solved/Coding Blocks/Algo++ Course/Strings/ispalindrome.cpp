// Time Complexity: O(1)
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool success = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            success = false;
            cout << "false";
            break;
        }
    }
    if (success)
    {
        cout << "true";
    }
}