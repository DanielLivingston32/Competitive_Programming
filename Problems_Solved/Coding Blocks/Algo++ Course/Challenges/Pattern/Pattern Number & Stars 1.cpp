#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        while (cnt < n - i)
        {
            cout << cnt + 1 << " ";
            cnt++;
        }
        cnt = 0;
        while (cnt < 2 * (i - 1) + 1)
        {
            cout << "* ";
            cnt++;
        }
        cout << endl;
    }
}