#include <iostream>
using namespace std;

void fill(int n, int m, int x, int y, int k, int elem, int arr[][100])
{
    // Base case
    if (x >= n or y >= m or x < 0 or y < 0)
    {
        return;
    }

    if (arr[x][y] != elem)
    {
        return;
    }

    // Recursive
    arr[x][y] = k;
    // Left
    fill(n, m, x, y - 1, k, elem, arr);
    // Up
    fill(n, m, x - 1, y, k, elem, arr);
    // Down
    fill(n, m, x + 1, y, k, elem, arr);
    // Right
    fill(n, m, x, y + 1, k, elem, arr);
}

int main()
{
    int t;
    cin >> t;
    int arr[100][100];
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int x, y, k, elem;
        cin >> x >> y >> k;

        elem = arr[x][y];

        fill(n, m, x, y, k, elem, arr);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}