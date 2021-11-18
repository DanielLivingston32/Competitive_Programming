#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool isSafe(bool grid[15][15], int n, int i, int j)
{
    
    for (int k = i; k >= 0; k++)
    {
        if (grid[k][j])
        {
            return false;
        }
    }
    
    for (int x = i, y = j; x >= 0, y >= 0; x--, y--)
    {
        if (grid[x][y])
        {
            return false;
        }
    }

    // Right Diagonal check
    for (int x = i, y = j; x >= 0, y < n; x--, y++)
    {
        if (grid[x][y])
        {
            return false;
        }
    }

    return true;
}

bool nQueensHard(bool grid[15][15], int n, int i, int &ans)
{
    // Base case
    if (i == n)
    {
        ans++;
        return true;
    }

    // Recursive case
    for (int j = 0; j < n; j++)
    {
        if (isSafe(grid, n, i, j))
        {
            grid[i][j] = 1;
            bool check = nQueensHard(grid, n, i + 1, ans);
            if (check)
            {
                return true;
            }
            // Backtracking
            grid[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    bool grid[15][15] = {0};
    nQueensHard(grid, n, 0, ans);

    cout << ans;

    return 0;
}