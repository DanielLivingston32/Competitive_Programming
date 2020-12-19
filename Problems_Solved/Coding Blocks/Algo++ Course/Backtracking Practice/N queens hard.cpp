#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool checkPlaceable(int output[15][15], int n, int i, int j)
{

    // Check vertical
    for (int k = i; k >= 0; k--)
    {
        if (output[k][j])
        {
            return false;
        }
    }
    // Check left diagonal
    for (int k = i, l = j; k >= 0 and l >= 0; k--, l--)
    {
        if (output[k][l])
        {
            return false;
        }
    }
    // Check right diagonal
    for (int k = i, l = j; k >= 0 and l < n; k--, l++)
    {
        if (output[k][l])
        {
            return false;
        }
    }

    return true;
}

void nQueens(int output[15][15], int n, int i, int &count)
{
    // Base case
    if (i == n)
    {
        // Print the board
        // for (int k = 0; k < n; k++)
        // {
        //     for (int l = 0; l < n; l++)
        //     {
        //         if (output[k][l])
        //         {
        //             cout << "Q ";
        //         }
        //         else
        //         {
        //             cout << "_ ";
        //         }
        //     }
        //     cout << endl;
        // // }
        // cout << endl
        //      << endl;

        count++;
        return;
    }

    // Recursive case
    for (int j = 0; j < n; j++)
    {
        // Check if current position is safe to place the queen
        if (checkPlaceable(output, n, i, j))
        {
            output[i][j] = 1;
            nQueens(output, n, i + 1, count);

            // It is not safe to place the queen here
            output[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    int output[15][15] = {0};

    int count = 0;

    nQueens(output, n, 0, count);

    cout << count;

    return 0;
}