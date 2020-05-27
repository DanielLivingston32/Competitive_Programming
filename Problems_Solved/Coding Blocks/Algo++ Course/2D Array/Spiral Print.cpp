// To print the elements of a 2 D array like a Spiral .. For eg: Elements will be printed in a round as a spiral finally going to the center
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter no of rows and columns: ";
    cin >> m >> n;
    int a[m][n];
    cout << endl
         << "Enter the elements row by row each row in one line: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl
         << "The 2D array is as follows" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Elements are gonna be printed like a spiral below:" << endl;

    int rowstart = 0;
    int colstart = 0;
    int rowend = m - 1;
    int colend = n - 1;
    while (rowstart <= rowend and colstart <= colend)
    {

        for (int i = colstart; i <= colend; i++)
        {
            cout << a[rowstart][i] << " ";
        }
        rowstart++;
        for (int i = rowstart; i <= rowend; i++)
        {
            cout << a[i][colend] << " ";
        }
        colend--;
        if (rowstart < rowend)
        {
            for (int i = colend; i >= colstart; i--)
            {
                cout << a[rowend][i] << " ";
            }
            rowend--;
        }
        if (colstart < colend)
        {
            for (int i = rowend; i >= rowstart; i--)
            {
                cout << a[i][colstart] << " ";
            }
            colstart++;
        }
    }
}