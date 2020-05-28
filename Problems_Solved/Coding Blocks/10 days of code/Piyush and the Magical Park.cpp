#include <bits/stdc++.h>
using namespace std;

void magicalpark(char arr[][100], int m, int n, int k, int s)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = arr[i][j];
            if (ch == '.')
            {
                s -= 2;
            }
            else if (ch == '*')
            {
                s += 5;
            }
            else
            {
                break;
            }
            if (j != n - 1)
            {
                s--;
            }
            if (s < k)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    cout << s;
}

int main()
{
    int m, n, k, s;
    cin >> m >> n >> k >> s;
    char arr[m][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    magicalpark(arr, m, n, k, s);
}