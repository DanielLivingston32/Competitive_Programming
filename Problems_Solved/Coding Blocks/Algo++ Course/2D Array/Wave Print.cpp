// To print the elements of a 2 D array like a wave .. For eg: First column from top to bottom... Second column from bottom to top etc
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
         << "Elements are gonna be printed like a wave" << endl;

    for (int i = 0; i < n; i++)
    {
        //Even columns top to bottom
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[j][i] << " ";
            }
        }
        // Odd columns bottom to top
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << a[j][i] << " ";
            }
        }

        cout << endl;
    }
}
