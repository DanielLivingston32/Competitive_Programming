#include <iostream>
using namespace std;

int arr[10][10], completed[10], n, cost = 0;

void takeInput()
{
    int i, j;
    cout << "Enter the number of cities:";
    cin >> n;
    cout << "\nEnter the cost matrix\n";
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter elements of row:" << i + 1 << "\n";
        for (j = 0; j < n; j++)
            cin >> arr[i][j];
        completed[i] = 0;
    }
    cout << "\n\nThe cost list is:";
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < n; j++)
            cout << "\t" << arr[i][j];
    }
}

int least(int c)
{
    int i, nc = 999;
    int min = 999, kmin;
    for (i = 0; i < n; i++)
    {
        if ((arr[c][i] != 0) && (completed[i] == 0))
        {
            if (arr[c][i] < min)
            {
                min = arr[i][0] + arr[c][i];
                kmin = arr[c][i];
                nc = i;
            }
        }
    }
    if (min != 999)
        cost += kmin;

    return nc;
}

void mincost(int city)
{
    int i, ncity;
    completed[city] = 1;
    cout << city + 1 << "-->";
    ncity = least(city);
    if (ncity == 999)
    {
        ncity = 0;
        cout << ncity + 1;
        cost += arr[city][ncity];

        return;
    }
    mincost(ncity);
}

int main()
{
    takeInput();
    cout << "\n\nThe path is:\n";
    mincost(0);
    cout << "\n\nMinimum cost is" << cost;
    return 0;

    // 0 10 15 20
    // 5 0 9 10
    // 6 13 0 12
    // 8 8 9 0
}
