#include <bits/stdc++.h>
using namespace std;

void rotateimage(int arr[][1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        int colstart = 0;
        int colend = n - 1;
        while (colstart < colend)
        {
            swap(arr[i][colstart], arr[i][colend]);
            colstart++;
            colend--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    rotateimage(arr, n);
}