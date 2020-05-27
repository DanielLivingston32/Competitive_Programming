// As both the rows and columns of the 2D Array are sorted we could use this to our advantage...
// You can also use linear search and binary search.. For linear search the time complexity is O(N^2) and for binary search
// the time complexity is O(N log N)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[1000][1000], k;
    cout << "Enter matrix resolution as n and also Enter k:" << endl;
    cin >> n >> k;
    cout << "Enter the elements of matrix one by one row wise: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int rowpointer = 0;
    int colpointer = n - 1;
    bool success = false;

    while (rowpointer < n && colpointer >= 0)
    {
        int curr = arr[rowpointer][colpointer];
        if (curr == k)
        {
            success = true;
            break;
        }
        if (k > curr)
        {
            rowpointer++;
        }
        else
        {
            colpointer--;
        }
    }

    if (success)
    {
        cout << endl
             << "YES ELEMENT FOUND in position (" << rowpointer << " , " << colpointer << ")";
    }
    else
    {
        cout << endl
             << "NO ELEMENT NOT FOUND";
    }
}