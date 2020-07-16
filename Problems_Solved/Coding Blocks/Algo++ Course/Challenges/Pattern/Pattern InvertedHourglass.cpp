#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    bool reverse = false;
    i = n;
    while (i <= n)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        int cnt = 0;
        while (cnt < 4 * i - 2)
        {
            cout << " ";
            cnt++;
        }
        for (int j = i; j <= n; j++)
        {
            if (j == 0)
            {
                continue;
            }
            cout << j << " ";
        }
        cout << endl;

        if (i == 0)
        {
            reverse = true;
            i++;
        }
        else if (reverse)
        {
            i++;
        }
        else
        {
            i--;
        }
    }
}