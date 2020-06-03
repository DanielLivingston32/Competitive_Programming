// This code will work for all testcases and all combinations of m and n...
// Time comlexity: O(m*n)
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int arr[n][10];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowstart = 0;
    int rowend = n - 1;
    int colstart = 0;
    int colend = m - 1;
    while (rowstart <= rowend && colstart <= colend)
    {
        // For colstart
        for (int i = rowstart; i <= rowend; i++)
        {
            cout << arr[i][colstart] << ", ";
        }
        colstart++;

        // For rowend
        for (int j = colstart; j <= colend; j++)
        {
            cout << arr[rowend][j] << ", ";
        }
        rowend--;

        if (colstart < colend)
        {
            //col colend
            for (int i = rowend; i >= rowstart; i--)
            {
                cout << arr[i][colend] << ", ";
            }
            colend--;
        }

        if (rowstart < rowend)
        {
            // rowstart
            for (int j = colend; j >= colstart; j--)
            {
                cout << arr[rowstart][j] << ", ";
            }
            rowstart++;
        }
    }

    cout << "END";
}