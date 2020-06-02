// Watch the lecture in coding blocks to understand the problem... Time complexity:O(N^2)
#include <algorithm>
#include <iostream>
#include <climits>

using namespace std;

long int maxSumSorted(int arr[][100], int m, int n)
{
    int sufixsum[n][100];
    int result = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (j != m - 1 || i != n - 1)
            {
                if (j != m - 1 && i != n - 1)
                {
                    sufixsum[i][j] = sufixsum[i + 1][j] + sufixsum[i][j + 1] + arr[i][j];
                }
                else
                {
                    if (j == m - 1)
                    {
                        sufixsum[i][j] = sufixsum[i + 1][j] + arr[i][j];
                    }
                    else
                    {
                        sufixsum[i][j] = sufixsum[i][j + 1] + arr[i][j];
                    }
                }
            }
            else
            {
                sufixsum[i][j] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result = max(result, sufixsum[i][j]);
        }
    }
    return result;
}

int main()
{
    int m, n;
    cin >> n >> m;
    int arr[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maxSumSorted(arr, m, n);
}