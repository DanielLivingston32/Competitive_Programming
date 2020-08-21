#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans, temp;
    cin >> ans;
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        ans ^= temp;
    }
    cout << ans;
}