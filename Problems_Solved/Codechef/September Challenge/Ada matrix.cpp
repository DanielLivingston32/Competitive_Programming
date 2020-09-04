#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        int cnt = 0, j = 1;
        bool transpose = false;
        for (int i = n; i >= 1; i--)
        {
            if (transpose)
            {
                swap(a[i][j], a[j][i]);
            }
            if (a[i][j] != (i - 1) * n + j)
            {
                cnt++;
                transpose = !(transpose);
            }
        }
        cout << cnt << endl;
    }
}