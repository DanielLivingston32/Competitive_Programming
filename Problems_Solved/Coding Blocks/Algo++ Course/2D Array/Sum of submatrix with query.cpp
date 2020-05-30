// Find the sum based on the given query limits....

#include <iostream>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m;
    int arr[n][100];
    int prefixsum[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (j == 0)
            {
                prefixsum[i][j] = arr[i][j];
            }
            else
            {
                prefixsum[i][j] = prefixsum[i][j - 1] + arr[i][j];
            }
            if (i != 0)
            {
                prefixsum[i][j] += prefixsum[i - 1][j];
            }
        }
    }

    cout << endl;
    cin >> q;
    while (q--)
    {
        int tl, tr, bl, br;
        cin >> tl >> tr >> bl >> br;
        int sum = 0;

        int s = prefixsum[bl][br];
        int s1, s2, s3;
        if (tl != 0)
        {
            s1 = prefixsum[tl - 1][br];
        }
        else
        {
            s1 = 0;
        }

        if (tr != 0)
        {
            s2 = prefixsum[bl][tr - 1];
        }
        else
        {
            s2 = 0;
        }

        if (tl != 0 && tr != 0)
        {
            s3 = prefixsum[tl - 1][tr - 1];
        }
        else
        {
            s3 = 0;
        }
        cout << (s - (s1 + s2) + (2 * s3)) << endl;
    }
}