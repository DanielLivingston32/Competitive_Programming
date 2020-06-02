// Time complexity: O(m+n)

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;
    bool success = false;
    int left_idx = 0, right_idx = m - 1;
    while (left_idx <= n - 1 && right_idx >= 0)
    {
        int chk = arr[left_idx][right_idx];
        if (chk == k)
        {
            cout << "1";
            success = true;
            break;
        }
        else if (chk < k)
        {
            left_idx++;
        }
        else
        {
            right_idx--;
        }
    }
    if (success == false)
    {
        cout << "0";
    }
}